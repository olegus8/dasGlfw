#pragma once

#define USE_GENERATED   1

// making custom builtin module
class Module_glfw : public Module {
    ModuleLibrary lib;
public:
    Module_glfw();
    virtual ~Module_glfw();
    bool initialized = false;
    virtual bool initDependencies() override;
    virtual ModuleAotType aotRequire ( TextWriter & tw ) const override;
    void initConst();
    void initAnnotations();
    void initFunctions();
};
