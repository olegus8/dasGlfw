require fio
require strings
require daslib/strings_boost
require daslib/cpp_gen


[export]
def main
    // configure
    blocked_type_names <- [{auto[]
        "GLFWcharfun";
        "GLFWkeyfun";
        "GLFWmonitorfun";
        "GLFWscrollfun";
        "GLFWcharmodsfun";
        "GLFWjoystickfun";
        "GLFWwindowcontentscalefun";
        "GLFWmousebuttonfun";
        "GLFWerrorfun";
        "GLFWwindowfocusfun";
        "GLFWwindowclosefun";
        "GLFWwindowsizefun";
        "GLFWdropfun";
        "GLFWglproc"
    }]

    blocked_functions <- [{auto[]
        "operator delete";
        "operator new";
        "glfwDestroyWindow";        // we overwrite with custom one
        "___report_gsfailure"       // straight up not necessary
    }]

/*
    cmres_functions <- [{auto[]
        "ImGui_ImplVulkanH_SelectSurfaceFormat"
    }]
*/
    // generate
    allow_extern_c = true
    var args <- get_command_line_arguments()
    bindHeaders(args[3], args[4])
    genDefineConstants(args[5],args[4])

