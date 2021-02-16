#include "daScript/daScript.h"
#include "daScript/ast/ast_typefactory_bind.h"

#include "module_glfw_include.h"

using namespace das;

#include "need_glfw.h"

void Module_glfw::initConst ( ) {
#if USE_GENERATED
#include "module_glfw.const_inc"
#endif
}
