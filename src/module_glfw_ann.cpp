#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "module_glfw_include.h"

using namespace das;

#include "need_glfw.h"

#if USE_GENERATED
#define GLOBAL_NAMESPACE
#include "module_glfw.h"
#include "module_glfw.ann.cpp_inc"
#endif

void Module_glfw::initAnnotations ( ) {
#if USE_GENERATED
#include "module_glfw.ann.inc"
#endif
}
