#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "module_glfw_include.h"

IMPLEMENT_EXTERNAL_TYPE_FACTORY(GLFWmonitor,GLFWmonitor);
IMPLEMENT_EXTERNAL_TYPE_FACTORY(GLFWwindow,GLFWwindow);
IMPLEMENT_EXTERNAL_TYPE_FACTORY(GLFWcursor,GLFWcursor);

using namespace das;

#include "need_glfw.h"

#if USE_GENERATED
#include "aot_glfw.h"
#include "module_glfw.h"
#include "module_glfw.enum.cpp_inc"
#endif

namespace das {

    struct GlswCB {
        Lambda      lambda;
        Context *   context = nullptr;
    };

    struct GlswCallbacks {
        GlswCB  keyCB;
        GlswCB  charCB;
        GlswCB  cursorCB;
        GlswCB  cursorEnterCB;
        GlswCB  mouseCB;
        GlswCB  scrollCB;
    };

    static das_map<GLFWwindow *, GlswCallbacks>   g_Callbacks;

    void DasGlfw_KeyFunction ( GLFWwindow* window, int keyCode, int scanCode, int action, int modes ) {
        auto & cb = g_Callbacks[window].keyCB;
        if ( cb.context ) {
            das_invoke_lambda<void>::invoke<GLFWwindow *,int,int,int,int>(cb.context,cb.lambda,
                window,keyCode,scanCode,action,modes);
        }
    }

    void DasGlfw_CharFunction ( GLFWwindow* window, unsigned int cp ) {
        auto & cb = g_Callbacks[window].charCB;
        if ( cb.context ) {
            das_invoke_lambda<void>::invoke<GLFWwindow *,unsigned int>(cb.context,cb.lambda,
                window,cp);
        }
    }

    void DasGlfw_CursorPosFunction ( GLFWwindow* window, double x, double y ) {
        auto & cb = g_Callbacks[window].cursorCB;
        if ( cb.context ) {
            das_invoke_lambda<void>::invoke<GLFWwindow *,double,double>(cb.context,cb.lambda,
                window,x,y);
        }
    }

    void DasGlfw_CursorEnterFunction ( GLFWwindow* window, int enter ) {
        auto & cb = g_Callbacks[window].cursorEnterCB;
        if ( cb.context ) {
            das_invoke_lambda<void>::invoke<GLFWwindow *,bool>(cb.context,cb.lambda,
                window,enter!=0);
        }
    }

    void DasGlfw_MouseFunction ( GLFWwindow* window, int buttons, int action, int modes ) {
        auto & cb = g_Callbacks[window].mouseCB;
        if ( cb.context ) {
            das_invoke_lambda<void>::invoke<GLFWwindow *,int,int,int>(cb.context,cb.lambda,
                window,buttons,action,modes);
        }
    }

    void DasGlfw_ScrollFunction ( GLFWwindow* window, double x, double y ) {
        auto & cb = g_Callbacks[window].scrollCB;
        if ( cb.context ) {
            das_invoke_lambda<void>::invoke<GLFWwindow *,double,double>(cb.context,cb.lambda,
                window,x,y);
        }
    }

    void DasGlfw_SetKeyCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,int,int,int,int> func, Context * ctx ) {
        glfwSetKeyCallback(window,DasGlfw_KeyFunction);
        g_Callbacks[window].keyCB = { func, ctx };
    }

    void DasGlfw_SetCharCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,unsigned int> func, Context * ctx ) {
        glfwSetCharCallback(window,DasGlfw_CharFunction);
        g_Callbacks[window].charCB = { func, ctx };
    }

    void DasGlfw_SetCursorPosCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,double,double> func, Context * ctx ) {
        glfwSetCursorPosCallback(window,DasGlfw_CursorPosFunction);
        g_Callbacks[window].cursorCB = { func, ctx };
    }

    void DasGlfw_SetCursorEnterCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,bool> func, Context * ctx ) {
        glfwSetCursorEnterCallback(window,DasGlfw_CursorEnterFunction);
        g_Callbacks[window].cursorEnterCB = { func, ctx };
    }

    void DasGlfw_SetMouseButtonCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,int,int,int> func, Context * ctx ) {
        glfwSetMouseButtonCallback(window,DasGlfw_MouseFunction);
        g_Callbacks[window].mouseCB = { func, ctx };
    }

    void DasGlfw_SetScrollCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,double,double> func, Context * ctx ) {
        glfwSetScrollCallback(window,DasGlfw_ScrollFunction);
        g_Callbacks[window].scrollCB = { func, ctx };
    }

    void DasGlfw_Shutdown() {
        g_Callbacks.clear();
    }

    void DasGlfw_DestroyWindow ( GLFWwindow * window ) {
        auto it = g_Callbacks.find(window);
        if ( it!=g_Callbacks.end() ) g_Callbacks.erase(it);
        glfwDestroyWindow(window);
    }
}

// making custom builtin module

Module_glfw::~Module_glfw() {
    DasGlfw_Shutdown();
}

Module_glfw::Module_glfw() : Module("glfw") {
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
    addExtern<DAS_BIND_FUN(DasGlfw_SetCharCallback)>(*this,lib,"glfwSetCharCallback",
        SideEffects::worstDefault,"DasGlfw_SetCharCallback");
    addExtern<DAS_BIND_FUN(DasGlfw_SetCursorPosCallback)>(*this,lib,"glfwSetCursorPosCallback",
        SideEffects::worstDefault,"DasGlfw_SetCursorPosCallback");
    addExtern<DAS_BIND_FUN(DasGlfw_SetCursorEnterCallback)>(*this,lib,"glfwSetCursorEnterCallback",
        SideEffects::worstDefault,"DasGlfw_SetCursorEnterCallback");
    addExtern<DAS_BIND_FUN(DasGlfw_SetMouseButtonCallback)>(*this,lib,"glfwSetMouseButtonCallback",
        SideEffects::worstDefault,"DasGlfw_SetMouseButtonCallback");
    addExtern<DAS_BIND_FUN(DasGlfw_SetScrollCallback)>(*this,lib,"glfwSetScrollCallback",
        SideEffects::worstDefault,"DasGlfw_SetScrollCallback");
    addExtern<DAS_BIND_FUN(DasGlfw_DestroyWindow)>(*this,lib,"glfwDestroyWindow",
        SideEffects::worstDefault,"DasGlfw_DestroyWindow");
}

bool Module_glfw::initDependencies()  {
        if ( initialized ) return true;
        initialized = true;
        initConst();
        initAnnotations();
        initFunctions();
#if USE_GENERATED
#include "module_glfw.enum.inc"
#include "module_glfw.method.inc"
#endif
        return true;
    }

ModuleAotType Module_glfw::aotRequire ( TextWriter & tw ) const {
    // add your stuff here
    tw << "#include <GLFW/glfw3.h>\n";
    tw << "#include \"../modules/dasGlfw/src/aot_glfw.h\"\n";
    // specifying AOT type, in this case direct cpp mode (and not hybrid mode)
    return ModuleAotType::cpp;
}

// registering module, so that its available via 'NEED_MODULE' macro
REGISTER_MODULE(Module_glfw);
