// TODO: remove glfw

require imgui
require glfw
require imgui_app
require daslib/safe_addr

def imgui_app ( title:string; blk : block )
    if glfwInit()==0
		panic("can't init glfw")
    var window = glfwCreateWindow(1280, 720, title, null, null)
    if window==null
		panic("can't create window")
    glfwMakeContextCurrent(window)
    glfwSwapInterval(1)
    imgui::CreateContext(null)
    var io & = imgui::GetIO()
    io.FontGlobalScale = 2.0;   // BBATKIN: note - my monitor is HUGE
    imgui::StyleColorsDark(null)
    ImGui_ImplGlfw_InitForOpenGL(window, true)
    ImGui_ImplOpenGL2_Init()
    var clear_color = float4(0.45f, 0.55f, 0.60f, 1.00f)
    while glfwWindowShouldClose(window)==0
        glfwPollEvents()
        ImGui_ImplOpenGL2_NewFrame()
        ImGui_ImplGlfw_NewFrame()
        invoke(blk)
        var display_w, display_h : int
        glfwGetFramebufferSize(window, safe_addr(display_w), safe_addr(display_h))
        glViewport(0, 0, display_w, display_h)
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w)
        glClear(GL_COLOR_BUFFER_BIT)
        ImGui_ImplOpenGL2_RenderDrawData(imgui::GetDrawData())
        glfwMakeContextCurrent(window)
        glfwSwapBuffers(window)
    ImGui_ImplOpenGL2_Shutdown()
    ImGui_ImplGlfw_Shutdown()
    imgui::DestroyContext(null)
    glfwDestroyWindow(window)
    glfwTerminate()


[export]
def main
	var f = 0.0
	var fp = 0.0
	imgui_app("Testing IMGUI") <|
        imgui::NewFrame()
//        imgui::Text("Hello, world!")
        imgui::SliderFloat("float", safe_addr(f), 0.0f, 1.0f, "%3f", 0)
//        imgui::Text("This is text!")
        imgui::ShowDemoWindow(null)
        imgui::Render()
		if fp != f
			fp = f
			print("{fp}\n")

