options indenting = 4
options remove_unused_symbols = false

module glfw_boost shared

require glfw public
require daslib/safe_addr

def glfwGetFramebufferSize ( window:GLFWwindow?; var display_w,display_h:int& )
    glfw::glfwGetFramebufferSize(window, safe_addr(display_w), safe_addr(display_h))