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

struct GlfwCallbackFnAnnotation : ManagedValueAnnotation<void *> {
    GlfwCallbackFnAnnotation ( const char * name, const char * cppName )
        : ManagedValueAnnotation<void *>(name,cppName) {
    };
};

// making custom builtin module
class Module_glfw : public Module {
    ModuleLibrary lib;
public:
    Module_glfw() : Module("glfw") {
        // make basic module
        lib.addModule(this);
        lib.addBuiltInModule();
        // dummies
        addAnnotation(make_smart<DummyTypeAnnotation>("GLFWmonitor", "GLFWmonitor",1,1));
        addAnnotation(make_smart<DummyTypeAnnotation>("GLFWwindow", "GLFWwindow",1,1));
        addAnnotation(make_smart<DummyTypeAnnotation>("GLFWcursor", "GLFWcursor",1,1));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWcharfun", "GLFWcharfun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWkeyfun", "GLFWkeyfun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWmonitorfun", "GLFWmonitorfun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWscrollfun", "GLFWscrollfun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWcharmodsfun", "GLFWcharmodsfun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWjoystickfun", "GLFWjoystickfun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWwindowcontentscalefun", "GLFWwindowcontentscalefun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWmousebuttonfun", "GLFWmousebuttonfun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWerrorfun", "GLFWerrorfun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWwindowfocusfun", "GLFWwindowfocusfun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWwindowclosefun", "GLFWwindowclosefun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWwindowsizefun", "GLFWwindowsizefun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWdropfun", "GLFWdropfun"));
        addAnnotation(make_smart<GlfwCallbackFnAnnotation>("GLFWglproc", "GLFWglproc"));
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
