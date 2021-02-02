require glfw
require daslib/safe_addr
require daslib/defer
require math

var mouse_x = 0.
var mouse_y = 0.

def glfw_app ( title:string; blk : block<(w,h:int):void> )
    if glfwInit()==0
		panic("can't init glfw")
    defer <|
        glfwTerminate()
    var window = glfwCreateWindow(1280, 720, title, null, null)
    if window==null
		panic("can't create window")
    defer <|
        glfwDestroyWindow(window)
    glfwSetKeyCallback(window) <| @ ( window, key, scancode, action, mods )
        print("keyCB:  {window} {key} {scancode} {action} {mods}\n")
    glfwSetCharCallback(window) <| @ ( window, ch )
        print("charCB: {window} {ch}\n")
    glfwSetCursorPosCallback(window) <| @ ( window, x, y )
        print("cursCB: {window} {x} {y}\n")
        mouse_x = float(x)
        mouse_y = float(y)
    glfwSetCursorEnterCallback(window) <| @ ( window, enter )
        print("centCB: {window} {enter}\n")
    glfwSetMouseButtonCallback(window) <| @ ( window, buttons, action, mods )
        print("mbutCB:  {window} {buttons} {action} {mods}\n")
    glfwSetScrollCallback(window) <| @ ( window, x, y )
        print("scrlCB: {window} {x} {y}\n")
    glfwMakeContextCurrent(window)
    while glfwWindowShouldClose(window)==0
        glfwPollEvents()
        var display_w, display_h : int
        glfwGetFramebufferSize(window, safe_addr(display_w), safe_addr(display_h))
        invoke(blk, display_w, display_h)
        glfwMakeContextCurrent(window)
        glfwSwapBuffers(window)


def glBeginEnd(prim:uint;blk:block)
    glBegin(prim)
    invoke(blk)
    glEnd()


def gluPerspective(fovy,aspectRatio,znear,zfar:double)
    var ymax = znear * tan(fovy/2.0lf)
    var ymin = -ymax
    var xmin = -ymax * aspectRatio
    var xmax = ymax * aspectRatio
    glFrustum(-xmax, xmax, -ymax, ymax, znear, zfar)

[export]
def main

    var rot_cube = 0.0
    var rot_tri = 0.0

    glfw_app("Testing GLFW") <| $(display_w, display_h)

        glViewport(0, 0, display_w, display_h)
        glClearColor(0.2, 0.2, 0.2, 1.0)
        glClearDepth(1.0lf)
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT)

        glEnable(GL_DEPTH_TEST)
        glDepthFunc(GL_LEQUAL)
        glShadeModel(GL_SMOOTH)
        glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST)

        let aspect = double(display_w) / double(display_h)
        glMatrixMode(GL_PROJECTION)
        glLoadIdentity()
        gluPerspective(45.0lf, aspect, 0.1lf, 100.0lf)

        glMatrixMode(GL_MODELVIEW)
        glLoadIdentity()
        glTranslatef(2.5f, 0.0f, -7.0f)
        glRotatef(rot_tri * 0.25,1.0,0.0,0.0)
        glRotatef(rot_cube,0.0,1.0,0.0)
        rot_cube += 1.0
        if rot_cube > 360.
            rot_cube -= 360.
        rot_tri += 0.5
        if rot_tri > 360.
            rot_tri -= 360.

        glBeginEnd(GL_QUADS) <|
            glColor3f(0.0f, 1.0f, 0.0f)
            glVertex3f( 1.0f, 1.0f, -1.0f)
            glVertex3f(-1.0f, 1.0f, -1.0f)
            glVertex3f(-1.0f, 1.0f,  1.0f)
            glVertex3f( 1.0f, 1.0f,  1.0f)
            glColor3f(1.0f, 0.5f, 0.0f)
            glVertex3f( 1.0f, -1.0f,  1.0f)
            glVertex3f(-1.0f, -1.0f,  1.0f)
            glVertex3f(-1.0f, -1.0f, -1.0f)
            glVertex3f( 1.0f, -1.0f, -1.0f)
            glColor3f(1.0f, 0.0f, 0.0f)
            glVertex3f( 1.0f,  1.0f, 1.0f)
            glVertex3f(-1.0f,  1.0f, 1.0f)
            glVertex3f(-1.0f, -1.0f, 1.0f)
            glVertex3f( 1.0f, -1.0f, 1.0f)
            glColor3f(1.0f, 1.0f, 0.0f)
            glVertex3f( 1.0f, -1.0f, -1.0f)
            glVertex3f(-1.0f, -1.0f, -1.0f)
            glVertex3f(-1.0f,  1.0f, -1.0f)
            glVertex3f( 1.0f,  1.0f, -1.0f)
            glColor3f(0.0f, 0.0f, 1.0f)
            glVertex3f(-1.0f,  1.0f,  1.0f)
            glVertex3f(-1.0f,  1.0f, -1.0f)
            glVertex3f(-1.0f, -1.0f, -1.0f)
            glVertex3f(-1.0f, -1.0f,  1.0f)
            glColor3f(1.0f, 0.0f, 1.0f)
            glVertex3f(1.0f,  1.0f, -1.0f)
            glVertex3f(1.0f,  1.0f,  1.0f)
            glVertex3f(1.0f, -1.0f,  1.0f)
            glVertex3f(1.0f, -1.0f, -1.0f)

        glLoadIdentity()
        glTranslatef(-2.5f, 0.0f, -6.0f)
        glRotatef(mouse_y,1.0,0.0,0.0)
        glRotatef(-mouse_x,0.0,1.0,0.0)

        glBeginEnd(GL_TRIANGLES) <|
            glColor3f(1.0f, 0.0f, 0.0f)
            glVertex3f( 0.0f, 1.0f, 0.0f)
            glColor3f(0.0f, 1.0f, 0.0f)
            glVertex3f(-1.0f, -1.0f, 1.0f)
            glColor3f(0.0f, 0.0f, 1.0f)
            glVertex3f(1.0f, -1.0f, 1.0f)
            glColor3f(1.0f, 0.0f, 0.0f)
            glVertex3f(0.0f, 1.0f, 0.0f)
            glColor3f(0.0f, 0.0f, 1.0f)
            glVertex3f(1.0f, -1.0f, 1.0f)
            glColor3f(0.0f, 1.0f, 0.0f)
            glVertex3f(1.0f, -1.0f, -1.0f)
            glColor3f(1.0f, 0.0f, 0.0f)
            glVertex3f(0.0f, 1.0f, 0.0f)
            glColor3f(0.0f, 1.0f, 0.0f)
            glVertex3f(1.0f, -1.0f, -1.0f)
            glColor3f(0.0f, 0.0f, 1.0f)
            glVertex3f(-1.0f, -1.0f, -1.0f)
            glColor3f(1.0f,0.0f,0.0f)
            glVertex3f( 0.0f, 1.0f, 0.0f)
            glColor3f(0.0f,0.0f,1.0f)
            glVertex3f(-1.0f,-1.0f,-1.0f)
            glColor3f(0.0f,1.0f,0.0f)
            glVertex3f(-1.0f,-1.0f, 1.0f)
