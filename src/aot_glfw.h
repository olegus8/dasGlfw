#pragma once

namespace das {
    void DasGlfw_KeyFunction ( GLFWwindow* window, int keyCode, int scanCode, int action, int modes );
    void DasGlfw_CharFunction ( GLFWwindow* window, unsigned int cp );
    void DasGlfw_CursorPosFunction ( GLFWwindow* window, double x, double y );
    void DasGlfw_CursorEnterFunction ( GLFWwindow* window, int enter );
    void DasGlfw_MouseFunction ( GLFWwindow* window, int buttons, int action, int modes );
    void DasGlfw_ScrollFunction ( GLFWwindow* window, double x, double y );
    void DasGlfw_SetKeyCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,int,int,int,int> func, Context * ctx );
    void DasGlfw_SetCharCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,unsigned int> func, Context * ctx );
    void DasGlfw_SetCursorPosCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,double,double> func, Context * ctx );
    void DasGlfw_SetCursorEnterCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,bool> func, Context * ctx );
    void DasGlfw_SetMouseButtonCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,int,int,int> func, Context * ctx );
    void DasGlfw_SetScrollCallback ( GLFWwindow * window, TLambda<void,const GLFWwindow*,double,double> func, Context * ctx );
    void DasGlfw_Shutdown();
    void DasGlfw_DestroyWindow ( GLFWwindow * window );
}
