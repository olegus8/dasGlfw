#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "module_glfw_include.h"

IMPLEMENT_EXTERNAL_TYPE_FACTORY(GLFWmonitor,GLFWmonitor);
IMPLEMENT_EXTERNAL_TYPE_FACTORY(GLFWwindow,GLFWwindow);
IMPLEMENT_EXTERNAL_TYPE_FACTORY(GLFWcursor,GLFWcursor);

using namespace das;

#define USE_GENERATED   1

#if USE_GENERATED

#include "module_glfw.h"

#include "module_glfw.cpp_inc"

#endif

namespace das {

    struct GlswCB {
        Lambda      lambda;
        Context *   context = nullptr;
    };

    struct GlswCallbacks {
        GlswCB  keyCB;
    };

    static das_map<GLFWwindow *, GlswCallbacks>   g_Callbacks;

    void DasGlfw_KeyFunction ( GLFWwindow* window, int keyCode, int scanCode, int action, int modes ) {
        auto & cb = g_Callbacks[window].keyCB;
        if ( cb.context ) {
            das_invoke_lambda<void>::invoke<GLFWwindow *,int,int,int,int>(cb.context,cb.lambda,
                window,keyCode,scanCode,action,modes);
        }
    }

    void DasGlfw_SetKeyCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,int,int,int,int> func, Context * ctx ) {
        glfwSetKeyCallback(window,DasGlfw_KeyFunction);
        g_Callbacks[window].keyCB = { func, ctx };
    }

    void DasGlfw_Shutdown() {
        g_Callbacks.clear();
    }
}

// making custom builtin module
class Module_glfw : public Module {
    ModuleLibrary lib;
public:
    virtual ~Module_glfw() {
        DasGlfw_Shutdown();
    }
    Module_glfw() : Module("glfw") {
        // make basic module
        lib.addModule(this);
        lib.addBuiltInModule();
        // dummies
        addAnnotation(make_smart<DummyTypeAnnotation>("GLFWmonitor", "GLFWmonitor",1,1));
        addAnnotation(make_smart<DummyTypeAnnotation>("GLFWwindow", "GLFWwindow",1,1));
        addAnnotation(make_smart<DummyTypeAnnotation>("GLFWcursor", "GLFWcursor",1,1));
        // callbacks
        addExtern<DAS_BIND_FUN(DasGlfw_SetKeyCallback)>(*this,lib,"glfwSetKeyCallback",
            SideEffects::worstDefault,"DasGlfw_SetKeyCallback");
    }
    bool initialized = false;
    virtual bool initDependencies() override {
        if ( initialized ) return true;
        initialized = true;
#if USE_GENERATED
#include "module_glfw.const_inc"
#include "module_glfw.inc"
#endif
        return true;
    }
    virtual ModuleAotType aotRequire ( TextWriter & tw ) const override {
        // add your stuff here
        tw << "#include <GLFW/glfw3.h>\n";
        // specifying AOT type, in this case direct cpp mode (and not hybrid mode)
        return ModuleAotType::cpp;
    }
};

// registering module, so that its available via 'NEED_MODULE' macro
REGISTER_MODULE(Module_glfw);
