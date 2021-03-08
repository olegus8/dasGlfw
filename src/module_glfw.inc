// ------------
// functions
// ------------

#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGenLists)>(*this, lib, "glGenLists",SideEffects::worstDefault, "glGenLists")
	->args({"range"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitors)>(*this, lib, "glfwGetMonitors",SideEffects::worstDefault, "glfwGetMonitors")
	->args({"count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowMonitor)>(*this, lib, "glfwGetWindowMonitor",SideEffects::worstDefault, "glfwGetWindowMonitor")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex4i)>(*this, lib, "glVertex4i",SideEffects::worstDefault, "glVertex4i")
	->args({"x","y","z","w"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPixelMapfv)>(*this, lib, "glPixelMapfv",SideEffects::worstDefault, "glPixelMapfv")
	->args({"map","mapsize","values"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex3s)>(*this, lib, "glVertex3s",SideEffects::worstDefault, "glVertex3s")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glStencilMask)>(*this, lib, "glStencilMask",SideEffects::worstDefault, "glStencilMask")
	->args({"mask"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glFogi)>(*this, lib, "glFogi",SideEffects::worstDefault, "glFogi")
	->args({"pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetPixelMapfv)>(*this, lib, "glGetPixelMapfv",SideEffects::worstDefault, "glGetPixelMapfv")
	->args({"map","values"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPopMatrix)>(*this, lib, "glPopMatrix",SideEffects::worstDefault, "glPopMatrix")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos4iv)>(*this, lib, "glRasterPos4iv",SideEffects::worstDefault, "glRasterPos4iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetClipboardString)>(*this, lib, "glfwSetClipboardString",SideEffects::worstDefault, "glfwSetClipboardString")
	->args({"window","string"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetLightiv)>(*this, lib, "glGetLightiv",SideEffects::worstDefault, "glGetLightiv")
	->args({"light","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetCursorEnterCallback)>(*this, lib, "glfwSetCursorEnterCallback",SideEffects::worstDefault, "glfwSetCursorEnterCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos4dv)>(*this, lib, "glRasterPos4dv",SideEffects::worstDefault, "glRasterPos4dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex3i)>(*this, lib, "glVertex3i",SideEffects::worstDefault, "glVertex3i")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexSubImage1D)>(*this, lib, "glTexSubImage1D",SideEffects::worstDefault, "glTexSubImage1D")
	->args({"target","level","xoffset","width","format","type","pixels"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glBindTexture)>(*this, lib, "glBindTexture",SideEffects::worstDefault, "glBindTexture")
	->args({"target","texture"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex4d)>(*this, lib, "glVertex4d",SideEffects::worstDefault, "glVertex4d")
	->args({"x","y","z","w"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glCallList)>(*this, lib, "glCallList",SideEffects::worstDefault, "glCallList")
	->args({"list"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex4f)>(*this, lib, "glVertex4f",SideEffects::worstDefault, "glVertex4f")
	->args({"x","y","z","w"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex3d)>(*this, lib, "glVertex3d",SideEffects::worstDefault, "glVertex3d")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalMesh1)>(*this, lib, "glEvalMesh1",SideEffects::worstDefault, "glEvalMesh1")
	->args({"mode","i1","i2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowFrameSize)>(*this, lib, "glfwGetWindowFrameSize",SideEffects::worstDefault, "glfwGetWindowFrameSize")
	->args({"window","left","top","right","bottom"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetGamepadName)>(*this, lib, "glfwGetGamepadName",SideEffects::worstDefault, "glfwGetGamepadName")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex3f)>(*this, lib, "glVertex3f",SideEffects::worstDefault, "glVertex3f")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickAxes)>(*this, lib, "glfwGetJoystickAxes",SideEffects::worstDefault, "glfwGetJoystickAxes")
	->args({"jid","count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLightModeliv)>(*this, lib, "glLightModeliv",SideEffects::worstDefault, "glLightModeliv")
	->args({"pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetTimerValue)>(*this, lib, "glfwGetTimerValue",SideEffects::worstDefault, "glfwGetTimerValue")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalMesh2)>(*this, lib, "glEvalMesh2",SideEffects::worstDefault, "glEvalMesh2")
	->args({"mode","i1","i2","j1","j2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDrawBuffer)>(*this, lib, "glDrawBuffer",SideEffects::worstDefault, "glDrawBuffer")
	->args({"mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPopName)>(*this, lib, "glPopName",SideEffects::worstDefault, "glPopName")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorPos)>(*this, lib, "glfwGetMonitorPos",SideEffects::worstDefault, "glfwGetMonitorPos")
	->args({"monitor","xpos","ypos"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetLightfv)>(*this, lib, "glGetLightfv",SideEffects::worstDefault, "glGetLightfv")
	->args({"light","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPixelStorei)>(*this, lib, "glPixelStorei",SideEffects::worstDefault, "glPixelStorei")
	->args({"pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos4sv)>(*this, lib, "glRasterPos4sv",SideEffects::worstDefault, "glRasterPos4sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalCoord2dv)>(*this, lib, "glEvalCoord2dv",SideEffects::worstDefault, "glEvalCoord2dv")
	->args({"u"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3uiv)>(*this, lib, "glColor3uiv",SideEffects::worstDefault, "glColor3uiv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos4fv)>(*this, lib, "glRasterPos4fv",SideEffects::worstDefault, "glRasterPos4fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3ubv)>(*this, lib, "glColor3ubv",SideEffects::worstDefault, "glColor3ubv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEnable)>(*this, lib, "glEnable",SideEffects::worstDefault, "glEnable")
	->args({"cap"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexdv)>(*this, lib, "glIndexdv",SideEffects::worstDefault, "glIndexdv")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIsEnabled)>(*this, lib, "glIsEnabled",SideEffects::worstDefault, "glIsEnabled")
	->args({"cap"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glHint)>(*this, lib, "glHint",SideEffects::worstDefault, "glHint")
	->args({"target","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexiv)>(*this, lib, "glIndexiv",SideEffects::worstDefault, "glIndexiv")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexsv)>(*this, lib, "glIndexsv",SideEffects::worstDefault, "glIndexsv")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPixelStoref)>(*this, lib, "glPixelStoref",SideEffects::worstDefault, "glPixelStoref")
	->args({"pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetKey)>(*this, lib, "glfwGetKey",SideEffects::worstDefault, "glfwGetKey")
	->args({"window","key"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetBooleanv)>(*this, lib, "glGetBooleanv",SideEffects::worstDefault, "glGetBooleanv")
	->args({"pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLightModelfv)>(*this, lib, "glLightModelfv",SideEffects::worstDefault, "glLightModelfv")
	->args({"pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwUpdateGamepadMappings)>(*this, lib, "glfwUpdateGamepadMappings",SideEffects::worstDefault, "glfwUpdateGamepadMappings")
	->args({"string"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetError)>(*this, lib, "glGetError",SideEffects::worstDefault, "glGetError")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetGamma)>(*this, lib, "glfwSetGamma",SideEffects::worstDefault, "glfwSetGamma")
	->args({"monitor","gamma"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalCoord2fv)>(*this, lib, "glEvalCoord2fv",SideEffects::worstDefault, "glEvalCoord2fv")
	->args({"u"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3usv)>(*this, lib, "glColor3usv",SideEffects::worstDefault, "glColor3usv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEnableClientState)>(*this, lib, "glEnableClientState",SideEffects::worstDefault, "glEnableClientState")
	->args({"array"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwIconifyWindow)>(*this, lib, "glfwIconifyWindow",SideEffects::worstDefault, "glfwIconifyWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowShouldClose)>(*this, lib, "glfwSetWindowShouldClose",SideEffects::worstDefault, "glfwSetWindowShouldClose")
	->args({"window","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPolygonMode)>(*this, lib, "glPolygonMode",SideEffects::worstDefault, "glPolygonMode")
	->args({"face","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowUserPointer)>(*this, lib, "glfwGetWindowUserPointer",SideEffects::worstDefault, "glfwGetWindowUserPointer")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glClearColor)>(*this, lib, "glClearColor",SideEffects::worstDefault, "glClearColor")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glCopyTexImage2D)>(*this, lib, "glCopyTexImage2D",SideEffects::worstDefault, "glCopyTexImage2D")
	->args({"target","level","internalFormat","x","y","width","height","border"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexfv)>(*this, lib, "glIndexfv",SideEffects::worstDefault, "glIndexfv")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetJoystickUserPointer)>(*this, lib, "glfwSetJoystickUserPointer",SideEffects::worstDefault, "glfwSetJoystickUserPointer")
	->args({"jid","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMouseButton)>(*this, lib, "glfwGetMouseButton",SideEffects::worstDefault, "glfwGetMouseButton")
	->args({"window","button"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwHideWindow)>(*this, lib, "glfwHideWindow",SideEffects::worstDefault, "glfwHideWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMatrixMode)>(*this, lib, "glMatrixMode",SideEffects::worstDefault, "glMatrixMode")
	->args({"mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexub)>(*this, lib, "glIndexub",SideEffects::worstDefault, "glIndexub")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDepthFunc)>(*this, lib, "glDepthFunc",SideEffects::worstDefault, "glDepthFunc")
	->args({"func"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetFramebufferSize)>(*this, lib, "glfwGetFramebufferSize",SideEffects::worstDefault, "glfwGetFramebufferSize")
	->args({"window","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwCreateStandardCursor)>(*this, lib, "glfwCreateStandardCursor",SideEffects::worstDefault, "glfwCreateStandardCursor")
	->args({"shape"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowIconifyCallback)>(*this, lib, "glfwSetWindowIconifyCallback",SideEffects::worstDefault, "glfwSetWindowIconifyCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDrawPixels)>(*this, lib, "glDrawPixels",SideEffects::worstDefault, "glDrawPixels")
	->args({"width","height","format","type","pixels"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexf)>(*this, lib, "glIndexf",SideEffects::worstDefault, "glIndexf")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorWorkarea)>(*this, lib, "glfwGetMonitorWorkarea",SideEffects::worstDefault, "glfwGetMonitorWorkarea")
	->args({"monitor","xpos","ypos","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexSubImage2D)>(*this, lib, "glTexSubImage2D",SideEffects::worstDefault, "glTexSubImage2D")
	->args({"target","level","xoffset","yoffset","width","height","format","type","pixels"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwMaximizeWindow)>(*this, lib, "glfwMaximizeWindow",SideEffects::worstDefault, "glfwMaximizeWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPolygonOffset)>(*this, lib, "glPolygonOffset",SideEffects::worstDefault, "glPolygonOffset")
	->args({"factor","units"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexd)>(*this, lib, "glIndexd",SideEffects::worstDefault, "glIndexd")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexParameterf)>(*this, lib, "glTexParameterf",SideEffects::worstDefault, "glTexParameterf")
	->args({"target","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex3fv)>(*this, lib, "glVertex3fv",SideEffects::worstDefault, "glVertex3fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glCopyTexImage1D)>(*this, lib, "glCopyTexImage1D",SideEffects::worstDefault, "glCopyTexImage1D")
	->args({"target","level","internalFormat","x","y","width","border"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickName)>(*this, lib, "glfwGetJoystickName",SideEffects::worstDefault, "glfwGetJoystickName")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glFrontFace)>(*this, lib, "glFrontFace",SideEffects::worstDefault, "glFrontFace")
	->args({"mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glScissor)>(*this, lib, "glScissor",SideEffects::worstDefault, "glScissor")
	->args({"x","y","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetVideoMode)>(*this, lib, "glfwGetVideoMode",SideEffects::worstDefault, "glfwGetVideoMode")
	->args({"monitor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex4dv)>(*this, lib, "glVertex4dv",SideEffects::worstDefault, "glVertex4dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexi)>(*this, lib, "glIndexi",SideEffects::worstDefault, "glIndexi")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwDefaultWindowHints)>(*this, lib, "glfwDefaultWindowHints",SideEffects::worstDefault, "glfwDefaultWindowHints")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex4iv)>(*this, lib, "glVertex4iv",SideEffects::worstDefault, "glVertex4iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex4sv)>(*this, lib, "glVertex4sv",SideEffects::worstDefault, "glVertex4sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexParameteri)>(*this, lib, "glTexParameteri",SideEffects::worstDefault, "glTexParameteri")
	->args({"target","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord1f)>(*this, lib, "glTexCoord1f",SideEffects::worstDefault, "glTexCoord1f")
	->args({"s"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord3i)>(*this, lib, "glTexCoord3i",SideEffects::worstDefault, "glTexCoord3i")
	->args({"s","t","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glClearIndex)>(*this, lib, "glClearIndex",SideEffects::worstDefault, "glClearIndex")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMultMatrixd)>(*this, lib, "glMultMatrixd",SideEffects::worstDefault, "glMultMatrixd")
	->args({"m"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorUserPointer)>(*this, lib, "glfwGetMonitorUserPointer",SideEffects::worstDefault, "glfwGetMonitorUserPointer")
	->args({"monitor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord1d)>(*this, lib, "glTexCoord1d",SideEffects::worstDefault, "glTexCoord1d")
	->args({"s"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetCursorPosCallback)>(*this, lib, "glfwSetCursorPosCallback",SideEffects::worstDefault, "glfwSetCursorPosCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glScaled)>(*this, lib, "glScaled",SideEffects::worstDefault, "glScaled")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMultMatrixf)>(*this, lib, "glMultMatrixf",SideEffects::worstDefault, "glMultMatrixf")
	->args({"m"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexs)>(*this, lib, "glIndexs",SideEffects::worstDefault, "glIndexs")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowUserPointer)>(*this, lib, "glfwSetWindowUserPointer",SideEffects::worstDefault, "glfwSetWindowUserPointer")
	->args({"window","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glCopyTexSubImage2D)>(*this, lib, "glCopyTexSubImage2D",SideEffects::worstDefault, "glCopyTexSubImage2D")
	->args({"target","level","xoffset","yoffset","x","y","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glScalef)>(*this, lib, "glScalef",SideEffects::worstDefault, "glScalef")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord1i)>(*this, lib, "glTexCoord1i",SideEffects::worstDefault, "glTexCoord1i")
	->args({"s"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowContentScale)>(*this, lib, "glfwGetWindowContentScale",SideEffects::worstDefault, "glfwGetWindowContentScale")
	->args({"window","xscale","yscale"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowPos)>(*this, lib, "glfwSetWindowPos",SideEffects::worstDefault, "glfwSetWindowPos")
	->args({"window","xpos","ypos"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex3iv)>(*this, lib, "glVertex3iv",SideEffects::worstDefault, "glVertex3iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex3sv)>(*this, lib, "glVertex3sv",SideEffects::worstDefault, "glVertex3sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetRequiredInstanceExtensions)>(*this, lib, "glfwGetRequiredInstanceExtensions",SideEffects::worstDefault, "glfwGetRequiredInstanceExtensions")
	->args({"count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRenderMode)>(*this, lib, "glRenderMode",SideEffects::worstDefault, "glRenderMode")
	->args({"mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex3dv)>(*this, lib, "glVertex3dv",SideEffects::worstDefault, "glVertex3dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glReadBuffer)>(*this, lib, "glReadBuffer",SideEffects::worstDefault, "glReadBuffer")
	->args({"mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwPollEvents)>(*this, lib, "glfwPollEvents",SideEffects::worstDefault, "glfwPollEvents")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord1s)>(*this, lib, "glTexCoord1s",SideEffects::worstDefault, "glTexCoord1s")
	->args({"s"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEdgeFlag)>(*this, lib, "glEdgeFlag",SideEffects::worstDefault, "glEdgeFlag")
	->args({"flag"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDrawArrays)>(*this, lib, "glDrawArrays",SideEffects::worstDefault, "glDrawArrays")
	->args({"mode","first","count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetTexEnviv)>(*this, lib, "glGetTexEnviv",SideEffects::worstDefault, "glGetTexEnviv")
	->args({"target","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPushClientAttrib)>(*this, lib, "glPushClientAttrib",SideEffects::worstDefault, "glPushClientAttrib")
	->args({"mask"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex4fv)>(*this, lib, "glVertex4fv",SideEffects::worstDefault, "glVertex4fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord3d)>(*this, lib, "glTexCoord3d",SideEffects::worstDefault, "glTexCoord3d")
	->args({"s","t","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetString)>(*this, lib, "glGetString",SideEffects::worstDefault, "glGetString")
	->args({"name"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord3f)>(*this, lib, "glTexCoord3f",SideEffects::worstDefault, "glTexCoord3f")
	->args({"s","t","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord3iv)>(*this, lib, "glTexCoord3iv",SideEffects::worstDefault, "glTexCoord3iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowOpacity)>(*this, lib, "glfwSetWindowOpacity",SideEffects::worstDefault, "glfwSetWindowOpacity")
	->args({"window","opacity"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord2s)>(*this, lib, "glTexCoord2s",SideEffects::worstDefault, "glTexCoord2s")
	->args({"s","t"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord3dv)>(*this, lib, "glTexCoord3dv",SideEffects::worstDefault, "glTexCoord3dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPrioritizeTextures)>(*this, lib, "glPrioritizeTextures",SideEffects::worstDefault, "glPrioritizeTextures")
	->args({"n","textures","priorities"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertexPointer)>(*this, lib, "glVertexPointer",SideEffects::worstDefault, "glVertexPointer")
	->args({"size","type","stride","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRotated)>(*this, lib, "glRotated",SideEffects::worstDefault, "glRotated")
	->args({"angle","x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwCreateWindow)>(*this, lib, "glfwCreateWindow",SideEffects::worstDefault, "glfwCreateWindow")
	->args({"width","height","title","monitor","share"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickGUID)>(*this, lib, "glfwGetJoystickGUID",SideEffects::worstDefault, "glfwGetJoystickGUID")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glBlendFunc)>(*this, lib, "glBlendFunc",SideEffects::worstDefault, "glBlendFunc")
	->args({"sfactor","dfactor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormal3s)>(*this, lib, "glNormal3s",SideEffects::worstDefault, "glNormal3s")
	->args({"nx","ny","nz"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRotatef)>(*this, lib, "glRotatef",SideEffects::worstDefault, "glRotatef")
	->args({"angle","x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalPoint2)>(*this, lib, "glEvalPoint2",SideEffects::worstDefault, "glEvalPoint2")
	->args({"i","j"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetTexEnvfv)>(*this, lib, "glGetTexEnvfv",SideEffects::worstDefault, "glGetTexEnvfv")
	->args({"target","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord3s)>(*this, lib, "glTexCoord3s",SideEffects::worstDefault, "glTexCoord3s")
	->args({"s","t","r"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPixelMapusv)>(*this, lib, "glPixelMapusv",SideEffects::worstDefault, "glPixelMapusv")
	->args({"map","mapsize","values"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwWindowHintString)>(*this, lib, "glfwWindowHintString",SideEffects::worstDefault, "glfwWindowHintString")
	->args({"hint","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwRawMouseMotionSupported)>(*this, lib, "glfwRawMouseMotionSupported",SideEffects::worstDefault, "glfwRawMouseMotionSupported")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalPoint1)>(*this, lib, "glEvalPoint1",SideEffects::worstDefault, "glEvalPoint1")
	->args({"i"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glFrustum)>(*this, lib, "glFrustum",SideEffects::worstDefault, "glFrustum")
	->args({"left","right","bottom","top","zNear","zFar"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord2f)>(*this, lib, "glTexCoord2f",SideEffects::worstDefault, "glTexCoord2f")
	->args({"s","t"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetCursor)>(*this, lib, "glfwSetCursor",SideEffects::worstDefault, "glfwSetCursor")
	->args({"window","cursor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowSize)>(*this, lib, "glfwSetWindowSize",SideEffects::worstDefault, "glfwSetWindowSize")
	->args({"window","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord2d)>(*this, lib, "glTexCoord2d",SideEffects::worstDefault, "glTexCoord2d")
	->args({"s","t"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetCursorPos)>(*this, lib, "glfwSetCursorPos",SideEffects::worstDefault, "glfwSetCursorPos")
	->args({"window","xpos","ypos"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glClearStencil)>(*this, lib, "glClearStencil",SideEffects::worstDefault, "glClearStencil")
	->args({"s"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord3sv)>(*this, lib, "glTexCoord3sv",SideEffects::worstDefault, "glTexCoord3sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord4s)>(*this, lib, "glTexCoord4s",SideEffects::worstDefault, "glTexCoord4s")
	->args({"s","t","r","q"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormal3i)>(*this, lib, "glNormal3i",SideEffects::worstDefault, "glNormal3i")
	->args({"nx","ny","nz"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickHats)>(*this, lib, "glfwGetJoystickHats",SideEffects::worstDefault, "glfwGetJoystickHats")
	->args({"jid","count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord3fv)>(*this, lib, "glTexCoord3fv",SideEffects::worstDefault, "glTexCoord3fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMaterialiv)>(*this, lib, "glMaterialiv",SideEffects::worstDefault, "glMaterialiv")
	->args({"face","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPolygonStipple)>(*this, lib, "glPolygonStipple",SideEffects::worstDefault, "glPolygonStipple")
	->args({"mask"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMaterialfv)>(*this, lib, "glMaterialfv",SideEffects::worstDefault, "glMaterialfv")
	->args({"face","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMap1f)>(*this, lib, "glMap1f",SideEffects::worstDefault, "glMap1f")
	->args({"target","u1","u2","stride","order","points"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormal3b)>(*this, lib, "glNormal3b",SideEffects::worstDefault, "glNormal3b")
	->args({"nx","ny","nz"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord4i)>(*this, lib, "glTexCoord4i",SideEffects::worstDefault, "glTexCoord4i")
	->args({"s","t","r","q"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoordPointer)>(*this, lib, "glTexCoordPointer",SideEffects::worstDefault, "glTexCoordPointer")
	->args({"size","type","stride","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetGammaRamp)>(*this, lib, "glfwSetGammaRamp",SideEffects::worstDefault, "glfwSetGammaRamp")
	->args({"monitor","ramp"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMap1d)>(*this, lib, "glMap1d",SideEffects::worstDefault, "glMap1d")
	->args({"target","u1","u2","stride","order","points"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPixelMapuiv)>(*this, lib, "glPixelMapuiv",SideEffects::worstDefault, "glPixelMapuiv")
	->args({"map","mapsize","values"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord4d)>(*this, lib, "glTexCoord4d",SideEffects::worstDefault, "glTexCoord4d")
	->args({"s","t","r","q"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glSelectBuffer)>(*this, lib, "glSelectBuffer",SideEffects::worstDefault, "glSelectBuffer")
	->args({"size","buffer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormal3f)>(*this, lib, "glNormal3f",SideEffects::worstDefault, "glNormal3f")
	->args({"nx","ny","nz"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord2i)>(*this, lib, "glTexCoord2i",SideEffects::worstDefault, "glTexCoord2i")
	->args({"s","t"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetCursorPos)>(*this, lib, "glfwGetCursorPos",SideEffects::worstDefault, "glfwGetCursorPos")
	->args({"window","xpos","ypos"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPixelTransferf)>(*this, lib, "glPixelTransferf",SideEffects::worstDefault, "glPixelTransferf")
	->args({"pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetClipboardString)>(*this, lib, "glfwGetClipboardString",SideEffects::worstDefault, "glfwGetClipboardString")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRectdv)>(*this, lib, "glRectdv",SideEffects::worstDefault, "glRectdv")
	->args({"v1","v2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRectfv)>(*this, lib, "glRectfv",SideEffects::worstDefault, "glRectfv")
	->args({"v1","v2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPixelTransferi)>(*this, lib, "glPixelTransferi",SideEffects::worstDefault, "glPixelTransferi")
	->args({"pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormal3d)>(*this, lib, "glNormal3d",SideEffects::worstDefault, "glNormal3d")
	->args({"nx","ny","nz"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord4f)>(*this, lib, "glTexCoord4f",SideEffects::worstDefault, "glTexCoord4f")
	->args({"s","t","r","q"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRectiv)>(*this, lib, "glRectiv",SideEffects::worstDefault, "glRectiv")
	->args({"v1","v2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRectsv)>(*this, lib, "glRectsv",SideEffects::worstDefault, "glRectsv")
	->args({"v1","v2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSwapBuffers)>(*this, lib, "glfwSwapBuffers",SideEffects::worstDefault, "glfwSwapBuffers")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glFeedbackBuffer)>(*this, lib, "glFeedbackBuffer",SideEffects::worstDefault, "glFeedbackBuffer")
	->args({"size","type","buffer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetTexImage)>(*this, lib, "glGetTexImage",SideEffects::worstDefault, "glGetTexImage")
	->args({"target","level","format","type","pixels"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDepthRange)>(*this, lib, "glDepthRange",SideEffects::worstDefault, "glDepthRange")
	->args({"zNear","zFar"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glCopyTexSubImage1D)>(*this, lib, "glCopyTexSubImage1D",SideEffects::worstDefault, "glCopyTexSubImage1D")
	->args({"target","level","xoffset","x","y","width"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetTexLevelParameteriv)>(*this, lib, "glGetTexLevelParameteriv",SideEffects::worstDefault, "glGetTexLevelParameteriv")
	->args({"target","level","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRecti)>(*this, lib, "glRecti",SideEffects::worstDefault, "glRecti")
	->args({"x1","y1","x2","y2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetCurrentContext)>(*this, lib, "glfwGetCurrentContext",SideEffects::worstDefault, "glfwGetCurrentContext")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetPixelMapusv)>(*this, lib, "glGetPixelMapusv",SideEffects::worstDefault, "glGetPixelMapusv")
	->args({"map","values"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetPixelMapuiv)>(*this, lib, "glGetPixelMapuiv",SideEffects::worstDefault, "glGetPixelMapuiv")
	->args({"map","values"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowSizeLimits)>(*this, lib, "glfwSetWindowSizeLimits",SideEffects::worstDefault, "glfwSetWindowSizeLimits")
	->args({"window","minwidth","minheight","maxwidth","maxheight"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDisable)>(*this, lib, "glDisable",SideEffects::worstDefault, "glDisable")
	->args({"cap"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRectd)>(*this, lib, "glRectd",SideEffects::worstDefault, "glRectd")
	->args({"x1","y1","x2","y2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDrawElements)>(*this, lib, "glDrawElements",SideEffects::worstDefault, "glDrawElements")
	->args({"mode","count","type","indices"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexEnvi)>(*this, lib, "glTexEnvi",SideEffects::worstDefault, "glTexEnvi")
	->args({"target","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord1sv)>(*this, lib, "glTexCoord1sv",SideEffects::worstDefault, "glTexCoord1sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRectf)>(*this, lib, "glRectf",SideEffects::worstDefault, "glRectf")
	->args({"x1","y1","x2","y2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexGenf)>(*this, lib, "glTexGenf",SideEffects::worstDefault, "glTexGenf")
	->args({"coord","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexEnvf)>(*this, lib, "glTexEnvf",SideEffects::worstDefault, "glTexEnvf")
	->args({"target","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPopClientAttrib)>(*this, lib, "glPopClientAttrib",SideEffects::worstDefault, "glPopClientAttrib")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord1dv)>(*this, lib, "glTexCoord1dv",SideEffects::worstDefault, "glTexCoord1dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexGend)>(*this, lib, "glTexGend",SideEffects::worstDefault, "glTexGend")
	->args({"coord","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwInit)>(*this, lib, "glfwInit",SideEffects::worstDefault, "glfwInit")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorPhysicalSize)>(*this, lib, "glfwGetMonitorPhysicalSize",SideEffects::worstDefault, "glfwGetMonitorPhysicalSize")
	->args({"monitor","widthMM","heightMM"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetTime)>(*this, lib, "glfwGetTime",SideEffects::worstDefault, "glfwGetTime")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3fv)>(*this, lib, "glColor3fv",SideEffects::worstDefault, "glColor3fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3dv)>(*this, lib, "glColor3dv",SideEffects::worstDefault, "glColor3dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetTexLevelParameterfv)>(*this, lib, "glGetTexLevelParameterfv",SideEffects::worstDefault, "glGetTexLevelParameterfv")
	->args({"target","level","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColorMask)>(*this, lib, "glColorMask",SideEffects::worstDefault, "glColorMask")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos3dv)>(*this, lib, "glRasterPos3dv",SideEffects::worstDefault, "glRasterPos3dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos3fv)>(*this, lib, "glRasterPos3fv",SideEffects::worstDefault, "glRasterPos3fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPushAttrib)>(*this, lib, "glPushAttrib",SideEffects::worstDefault, "glPushAttrib")
	->args({"mask"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos3iv)>(*this, lib, "glRasterPos3iv",SideEffects::worstDefault, "glRasterPos3iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glFogfv)>(*this, lib, "glFogfv",SideEffects::worstDefault, "glFogfv")
	->args({"pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLightModeli)>(*this, lib, "glLightModeli",SideEffects::worstDefault, "glLightModeli")
	->args({"pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos3sv)>(*this, lib, "glRasterPos3sv",SideEffects::worstDefault, "glRasterPos3sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetPolygonStipple)>(*this, lib, "glGetPolygonStipple",SideEffects::worstDefault, "glGetPolygonStipple")
	->args({"mask"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glBegin)>(*this, lib, "glBegin",SideEffects::worstDefault, "glBegin")
	->args({"mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPointSize)>(*this, lib, "glPointSize",SideEffects::worstDefault, "glPointSize")
	->args({"size"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetMonitorUserPointer)>(*this, lib, "glfwSetMonitorUserPointer",SideEffects::worstDefault, "glfwSetMonitorUserPointer")
	->args({"monitor","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMap2f)>(*this, lib, "glMap2f",SideEffects::worstDefault, "glMap2f")
	->args({"target","u1","u2","ustride","uorder","v1","v2","vstride","vorder","points"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexGeni)>(*this, lib, "glTexGeni",SideEffects::worstDefault, "glTexGeni")
	->args({"coord","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLightModelf)>(*this, lib, "glLightModelf",SideEffects::worstDefault, "glLightModelf")
	->args({"pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPushName)>(*this, lib, "glPushName",SideEffects::worstDefault, "glPushName")
	->args({"name"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMap2d)>(*this, lib, "glMap2d",SideEffects::worstDefault, "glMap2d")
	->args({"target","u1","u2","ustride","uorder","v1","v2","vstride","vorder","points"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowPosCallback)>(*this, lib, "glfwSetWindowPosCallback",SideEffects::worstDefault, "glfwSetWindowPosCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord1iv)>(*this, lib, "glTexCoord1iv",SideEffects::worstDefault, "glTexCoord1iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetVideoModes)>(*this, lib, "glfwGetVideoModes",SideEffects::worstDefault, "glfwGetVideoModes")
	->args({"monitor","count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLoadIdentity)>(*this, lib, "glLoadIdentity",SideEffects::worstDefault, "glLoadIdentity")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord1fv)>(*this, lib, "glTexCoord1fv",SideEffects::worstDefault, "glTexCoord1fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwRequestWindowAttention)>(*this, lib, "glfwRequestWindowAttention",SideEffects::worstDefault, "glfwRequestWindowAttention")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glArrayElement)>(*this, lib, "glArrayElement",SideEffects::worstDefault, "glArrayElement")
	->args({"i"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glStencilFunc)>(*this, lib, "glStencilFunc",SideEffects::worstDefault, "glStencilFunc")
	->args({"func","ref","mask"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3us)>(*this, lib, "glColor3us",SideEffects::worstDefault, "glColor3us")
	->args({"red","green","blue"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetProcAddress)>(*this, lib, "glfwGetProcAddress",SideEffects::worstDefault, "glfwGetProcAddress")
	->args({"procname"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRects)>(*this, lib, "glRects",SideEffects::worstDefault, "glRects")
	->args({"x1","y1","x2","y2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexubv)>(*this, lib, "glIndexubv",SideEffects::worstDefault, "glIndexubv")
	->args({"c"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3bv)>(*this, lib, "glColor3bv",SideEffects::worstDefault, "glColor3bv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3sv)>(*this, lib, "glColor3sv",SideEffects::worstDefault, "glColor3sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3iv)>(*this, lib, "glColor3iv",SideEffects::worstDefault, "glColor3iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEndList)>(*this, lib, "glEndList",SideEffects::worstDefault, "glEndList")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glClipPlane)>(*this, lib, "glClipPlane",SideEffects::worstDefault, "glClipPlane")
	->args({"plane","equation"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3ui)>(*this, lib, "glColor3ui",SideEffects::worstDefault, "glColor3ui")
	->args({"red","green","blue"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickUserPointer)>(*this, lib, "glfwGetJoystickUserPointer",SideEffects::worstDefault, "glfwGetJoystickUserPointer")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetTime)>(*this, lib, "glfwSetTime",SideEffects::worstDefault, "glfwSetTime")
	->args({"time"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowTitle)>(*this, lib, "glfwSetWindowTitle",SideEffects::worstDefault, "glfwSetWindowTitle")
	->args({"window","title"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPopAttrib)>(*this, lib, "glPopAttrib",SideEffects::worstDefault, "glPopAttrib")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4ubv)>(*this, lib, "glColor4ubv",SideEffects::worstDefault, "glColor4ubv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowMonitor)>(*this, lib, "glfwSetWindowMonitor",SideEffects::worstDefault, "glfwSetWindowMonitor")
	->args({"window","monitor","xpos","ypos","width","height","refreshRate"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowOpacity)>(*this, lib, "glfwGetWindowOpacity",SideEffects::worstDefault, "glfwGetWindowOpacity")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glFogiv)>(*this, lib, "glFogiv",SideEffects::worstDefault, "glFogiv")
	->args({"pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4uiv)>(*this, lib, "glColor4uiv",SideEffects::worstDefault, "glColor4uiv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4usv)>(*this, lib, "glColor4usv",SideEffects::worstDefault, "glColor4usv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPassThrough)>(*this, lib, "glPassThrough",SideEffects::worstDefault, "glPassThrough")
	->args({"token"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLoadMatrixf)>(*this, lib, "glLoadMatrixf",SideEffects::worstDefault, "glLoadMatrixf")
	->args({"m"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwDestroyCursor)>(*this, lib, "glfwDestroyCursor",SideEffects::worstDefault, "glfwDestroyCursor")
	->args({"cursor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLoadMatrixd)>(*this, lib, "glLoadMatrixd",SideEffects::worstDefault, "glLoadMatrixd")
	->args({"m"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEdgeFlagPointer)>(*this, lib, "glEdgeFlagPointer",SideEffects::worstDefault, "glEdgeFlagPointer")
	->args({"stride","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDisableClientState)>(*this, lib, "glDisableClientState",SideEffects::worstDefault, "glDisableClientState")
	->args({"array"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3ub)>(*this, lib, "glColor3ub",SideEffects::worstDefault, "glColor3ub")
	->args({"red","green","blue"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwFocusWindow)>(*this, lib, "glfwFocusWindow",SideEffects::worstDefault, "glfwFocusWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGenTextures)>(*this, lib, "glGenTextures",SideEffects::worstDefault, "glGenTextures")
	->args({"n","textures"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLightiv)>(*this, lib, "glLightiv",SideEffects::worstDefault, "glLightiv")
	->args({"light","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glOrtho)>(*this, lib, "glOrtho",SideEffects::worstDefault, "glOrtho")
	->args({"left","right","bottom","top","zNear","zFar"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetPointerv)>(*this, lib, "glGetPointerv",SideEffects::worstDefault, "glGetPointerv")
	->args({"pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glViewport)>(*this, lib, "glViewport",SideEffects::worstDefault, "glViewport")
	->args({"x","y","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetMapdv)>(*this, lib, "glGetMapdv",SideEffects::worstDefault, "glGetMapdv")
	->args({"target","query","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetMapfv)>(*this, lib, "glGetMapfv",SideEffects::worstDefault, "glGetMapfv")
	->args({"target","query","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMaterialf)>(*this, lib, "glMaterialf",SideEffects::worstDefault, "glMaterialf")
	->args({"face","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwRestoreWindow)>(*this, lib, "glfwRestoreWindow",SideEffects::worstDefault, "glfwRestoreWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowAttrib)>(*this, lib, "glfwSetWindowAttrib",SideEffects::worstDefault, "glfwSetWindowAttrib")
	->args({"window","attrib","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glShadeModel)>(*this, lib, "glShadeModel",SideEffects::worstDefault, "glShadeModel")
	->args({"mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexPointer)>(*this, lib, "glIndexPointer",SideEffects::worstDefault, "glIndexPointer")
	->args({"type","stride","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetMapiv)>(*this, lib, "glGetMapiv",SideEffects::worstDefault, "glGetMapiv")
	->args({"target","query","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwInitHint)>(*this, lib, "glfwInitHint",SideEffects::worstDefault, "glfwInitHint")
	->args({"hint","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwExtensionSupported)>(*this, lib, "glfwExtensionSupported",SideEffects::worstDefault, "glfwExtensionSupported")
	->args({"extension"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPixelZoom)>(*this, lib, "glPixelZoom",SideEffects::worstDefault, "glPixelZoom")
	->args({"xfactor","yfactor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowMaximizeCallback)>(*this, lib, "glfwSetWindowMaximizeCallback",SideEffects::worstDefault, "glfwSetWindowMaximizeCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMateriali)>(*this, lib, "glMateriali",SideEffects::worstDefault, "glMateriali")
	->args({"face","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexGenfv)>(*this, lib, "glTexGenfv",SideEffects::worstDefault, "glTexGenfv")
	->args({"coord","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glFlush)>(*this, lib, "glFlush",SideEffects::worstDefault, "glFlush")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glClear)>(*this, lib, "glClear",SideEffects::worstDefault, "glClear")
	->args({"mask"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glCopyPixels)>(*this, lib, "glCopyPixels",SideEffects::worstDefault, "glCopyPixels")
	->args({"x","y","width","height","type"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetVersionString)>(*this, lib, "glfwGetVersionString",SideEffects::worstDefault, "glfwGetVersionString")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLightfv)>(*this, lib, "glLightfv",SideEffects::worstDefault, "glLightfv")
	->args({"light","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetGamepadState)>(*this, lib, "glfwGetGamepadState",SideEffects::worstDefault, "glfwGetGamepadState")
	->args({"jid","state"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwWaitEventsTimeout)>(*this, lib, "glfwWaitEventsTimeout",SideEffects::worstDefault, "glfwWaitEventsTimeout")
	->args({"timeout"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwWindowShouldClose)>(*this, lib, "glfwWindowShouldClose",SideEffects::worstDefault, "glfwWindowShouldClose")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwJoystickIsGamepad)>(*this, lib, "glfwJoystickIsGamepad",SideEffects::worstDefault, "glfwJoystickIsGamepad")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEnd)>(*this, lib, "glEnd",SideEffects::worstDefault, "glEnd")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLineStipple)>(*this, lib, "glLineStipple",SideEffects::worstDefault, "glLineStipple")
	->args({"factor","pattern"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetTimerFrequency)>(*this, lib, "glfwGetTimerFrequency",SideEffects::worstDefault, "glfwGetTimerFrequency")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetTexGeniv)>(*this, lib, "glGetTexGeniv",SideEffects::worstDefault, "glGetTexGeniv")
	->args({"coord","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSwapInterval)>(*this, lib, "glfwSwapInterval",SideEffects::worstDefault, "glfwSwapInterval")
	->args({"interval"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNewList)>(*this, lib, "glNewList",SideEffects::worstDefault, "glNewList")
	->args({"list","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetTexGenfv)>(*this, lib, "glGetTexGenfv",SideEffects::worstDefault, "glGetTexGenfv")
	->args({"coord","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetTexParameteriv)>(*this, lib, "glGetTexParameteriv",SideEffects::worstDefault, "glGetTexParameteriv")
	->args({"target","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIsTexture)>(*this, lib, "glIsTexture",SideEffects::worstDefault, "glIsTexture")
	->args({"texture"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glStencilOp)>(*this, lib, "glStencilOp",SideEffects::worstDefault, "glStencilOp")
	->args({"fail","zfail","zpass"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexGeniv)>(*this, lib, "glTexGeniv",SideEffects::worstDefault, "glTexGeniv")
	->args({"coord","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwJoystickPresent)>(*this, lib, "glfwJoystickPresent",SideEffects::worstDefault, "glfwJoystickPresent")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetKeyScancode)>(*this, lib, "glfwGetKeyScancode",SideEffects::worstDefault, "glfwGetKeyScancode")
	->args({"key"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalCoord1d)>(*this, lib, "glEvalCoord1d",SideEffects::worstDefault, "glEvalCoord1d")
	->args({"u"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexGendv)>(*this, lib, "glTexGendv",SideEffects::worstDefault, "glTexGendv")
	->args({"coord","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDeleteTextures)>(*this, lib, "glDeleteTextures",SideEffects::worstDefault, "glDeleteTextures")
	->args({"n","textures"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glFinish)>(*this, lib, "glFinish",SideEffects::worstDefault, "glFinish")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalCoord1f)>(*this, lib, "glEvalCoord1f",SideEffects::worstDefault, "glEvalCoord1f")
	->args({"u"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwVulkanSupported)>(*this, lib, "glfwVulkanSupported",SideEffects::worstDefault, "glfwVulkanSupported")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormal3fv)>(*this, lib, "glNormal3fv",SideEffects::worstDefault, "glNormal3fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetKeyName)>(*this, lib, "glfwGetKeyName",SideEffects::worstDefault, "glfwGetKeyName")
	->args({"key","scancode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexParameteriv)>(*this, lib, "glTexParameteriv",SideEffects::worstDefault, "glTexParameteriv")
	->args({"target","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glInterleavedArrays)>(*this, lib, "glInterleavedArrays",SideEffects::worstDefault, "glInterleavedArrays")
	->args({"format","stride","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetIntegerv)>(*this, lib, "glGetIntegerv",SideEffects::worstDefault, "glGetIntegerv")
	->args({"pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowRefreshCallback)>(*this, lib, "glfwSetWindowRefreshCallback",SideEffects::worstDefault, "glfwSetWindowRefreshCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwWindowHint)>(*this, lib, "glfwWindowHint",SideEffects::worstDefault, "glfwWindowHint")
	->args({"hint","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowSize)>(*this, lib, "glfwGetWindowSize",SideEffects::worstDefault, "glfwGetWindowSize")
	->args({"window","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glReadPixels)>(*this, lib, "glReadPixels",SideEffects::worstDefault, "glReadPixels")
	->args({"x","y","width","height","format","type","pixels"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwMakeContextCurrent)>(*this, lib, "glfwMakeContextCurrent",SideEffects::worstDefault, "glfwMakeContextCurrent")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glAreTexturesResident)>(*this, lib, "glAreTexturesResident",SideEffects::worstDefault, "glAreTexturesResident")
	->args({"n","textures","residences"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetTexParameterfv)>(*this, lib, "glGetTexParameterfv",SideEffects::worstDefault, "glGetTexParameterfv")
	->args({"target","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4ui)>(*this, lib, "glColor4ui",SideEffects::worstDefault, "glColor4ui")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glPushMatrix)>(*this, lib, "glPushMatrix",SideEffects::worstDefault, "glPushMatrix")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glAlphaFunc)>(*this, lib, "glAlphaFunc",SideEffects::worstDefault, "glAlphaFunc")
	->args({"func","ref"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4iv)>(*this, lib, "glColor4iv",SideEffects::worstDefault, "glColor4iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4sv)>(*this, lib, "glColor4sv",SideEffects::worstDefault, "glColor4sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glClearAccum)>(*this, lib, "glClearAccum",SideEffects::worstDefault, "glClearAccum")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetTexGendv)>(*this, lib, "glGetTexGendv",SideEffects::worstDefault, "glGetTexGendv")
	->args({"coord","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetPrimaryMonitor)>(*this, lib, "glfwGetPrimaryMonitor",SideEffects::worstDefault, "glfwGetPrimaryMonitor")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwCreateCursor)>(*this, lib, "glfwCreateCursor",SideEffects::worstDefault, "glfwCreateCursor")
	->args({"image","xhot","yhot"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glClearDepth)>(*this, lib, "glClearDepth",SideEffects::worstDefault, "glClearDepth")
	->args({"depth"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwPostEmptyEvent)>(*this, lib, "glfwPostEmptyEvent",SideEffects::worstDefault, "glfwPostEmptyEvent")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4bv)>(*this, lib, "glColor4bv",SideEffects::worstDefault, "glColor4bv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4dv)>(*this, lib, "glColor4dv",SideEffects::worstDefault, "glColor4dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4i)>(*this, lib, "glColor4i",SideEffects::worstDefault, "glColor4i")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowIcon)>(*this, lib, "glfwSetWindowIcon",SideEffects::worstDefault, "glfwSetWindowIcon")
	->args({"window","count","images"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDeleteLists)>(*this, lib, "glDeleteLists",SideEffects::worstDefault, "glDeleteLists")
	->args({"list","range"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLineWidth)>(*this, lib, "glLineWidth",SideEffects::worstDefault, "glLineWidth")
	->args({"width"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4ub)>(*this, lib, "glColor4ub",SideEffects::worstDefault, "glColor4ub")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex2fv)>(*this, lib, "glVertex2fv",SideEffects::worstDefault, "glVertex2fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos4i)>(*this, lib, "glRasterPos4i",SideEffects::worstDefault, "glRasterPos4i")
	->args({"x","y","z","w"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexImage1D)>(*this, lib, "glTexImage1D",SideEffects::worstDefault, "glTexImage1D")
	->args({"target","level","internalformat","width","border","format","type","pixels"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4f)>(*this, lib, "glColor4f",SideEffects::worstDefault, "glColor4f")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexParameterfv)>(*this, lib, "glTexParameterfv",SideEffects::worstDefault, "glTexParameterfv")
	->args({"target","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMapGrid1f)>(*this, lib, "glMapGrid1f",SideEffects::worstDefault, "glMapGrid1f")
	->args({"un","u1","u2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormal3bv)>(*this, lib, "glNormal3bv",SideEffects::worstDefault, "glNormal3bv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormal3dv)>(*this, lib, "glNormal3dv",SideEffects::worstDefault, "glNormal3dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetClipPlane)>(*this, lib, "glGetClipPlane",SideEffects::worstDefault, "glGetClipPlane")
	->args({"plane","equation"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowPos)>(*this, lib, "glfwGetWindowPos",SideEffects::worstDefault, "glfwGetWindowPos")
	->args({"window","xpos","ypos"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4d)>(*this, lib, "glColor4d",SideEffects::worstDefault, "glColor4d")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(__report_gsfailure)>(*this, lib, "__report_gsfailure",SideEffects::worstDefault, "__report_gsfailure")
	->args({"_StackCookie"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMapGrid1d)>(*this, lib, "glMapGrid1d",SideEffects::worstDefault, "glMapGrid1d")
	->args({"un","u1","u2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glBitmap)>(*this, lib, "glBitmap",SideEffects::worstDefault, "glBitmap")
	->args({"width","height","xorig","yorig","xmove","ymove","bitmap"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3s)>(*this, lib, "glColor3s",SideEffects::worstDefault, "glColor3s")
	->args({"red","green","blue"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormal3iv)>(*this, lib, "glNormal3iv",SideEffects::worstDefault, "glNormal3iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLogicOp)>(*this, lib, "glLogicOp",SideEffects::worstDefault, "glLogicOp")
	->args({"opcode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalCoord1fv)>(*this, lib, "glEvalCoord1fv",SideEffects::worstDefault, "glEvalCoord1fv")
	->args({"u"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4b)>(*this, lib, "glColor4b",SideEffects::worstDefault, "glColor4b")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormal3sv)>(*this, lib, "glNormal3sv",SideEffects::worstDefault, "glNormal3sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord4dv)>(*this, lib, "glTexCoord4dv",SideEffects::worstDefault, "glTexCoord4dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetDoublev)>(*this, lib, "glGetDoublev",SideEffects::worstDefault, "glGetDoublev")
	->args({"pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord4fv)>(*this, lib, "glTexCoord4fv",SideEffects::worstDefault, "glTexCoord4fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetError)>(*this, lib, "glfwGetError",SideEffects::worstDefault, "glfwGetError")
	->args({"description"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord4iv)>(*this, lib, "glTexCoord4iv",SideEffects::worstDefault, "glTexCoord4iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord4sv)>(*this, lib, "glTexCoord4sv",SideEffects::worstDefault, "glTexCoord4sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColorMaterial)>(*this, lib, "glColorMaterial",SideEffects::worstDefault, "glColorMaterial")
	->args({"face","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glCallLists)>(*this, lib, "glCallLists",SideEffects::worstDefault, "glCallLists")
	->args({"n","type","lists"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glListBase)>(*this, lib, "glListBase",SideEffects::worstDefault, "glListBase")
	->args({"base"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glNormalPointer)>(*this, lib, "glNormalPointer",SideEffects::worstDefault, "glNormalPointer")
	->args({"type","stride","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glCullFace)>(*this, lib, "glCullFace",SideEffects::worstDefault, "glCullFace")
	->args({"mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos2i)>(*this, lib, "glRasterPos2i",SideEffects::worstDefault, "glRasterPos2i")
	->args({"x","y"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowAspectRatio)>(*this, lib, "glfwSetWindowAspectRatio",SideEffects::worstDefault, "glfwSetWindowAspectRatio")
	->args({"window","numer","denom"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos4d)>(*this, lib, "glRasterPos4d",SideEffects::worstDefault, "glRasterPos4d")
	->args({"x","y","z","w"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4fv)>(*this, lib, "glColor4fv",SideEffects::worstDefault, "glColor4fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3f)>(*this, lib, "glColor3f",SideEffects::worstDefault, "glColor3f")
	->args({"red","green","blue"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetMaterialiv)>(*this, lib, "glGetMaterialiv",SideEffects::worstDefault, "glGetMaterialiv")
	->args({"face","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos2f)>(*this, lib, "glRasterPos2f",SideEffects::worstDefault, "glRasterPos2f")
	->args({"x","y"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos4f)>(*this, lib, "glRasterPos4f",SideEffects::worstDefault, "glRasterPos4f")
	->args({"x","y","z","w"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex2dv)>(*this, lib, "glVertex2dv",SideEffects::worstDefault, "glVertex2dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4us)>(*this, lib, "glColor4us",SideEffects::worstDefault, "glColor4us")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glDepthMask)>(*this, lib, "glDepthMask",SideEffects::worstDefault, "glDepthMask")
	->args({"flag"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3d)>(*this, lib, "glColor3d",SideEffects::worstDefault, "glColor3d")
	->args({"red","green","blue"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos2d)>(*this, lib, "glRasterPos2d",SideEffects::worstDefault, "glRasterPos2d")
	->args({"x","y"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetGammaRamp)>(*this, lib, "glfwGetGammaRamp",SideEffects::worstDefault, "glfwGetGammaRamp")
	->args({"monitor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex2iv)>(*this, lib, "glVertex2iv",SideEffects::worstDefault, "glVertex2iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex2sv)>(*this, lib, "glVertex2sv",SideEffects::worstDefault, "glVertex2sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorName)>(*this, lib, "glfwGetMonitorName",SideEffects::worstDefault, "glfwGetMonitorName")
	->args({"monitor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3b)>(*this, lib, "glColor3b",SideEffects::worstDefault, "glColor3b")
	->args({"red","green","blue"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexEnviv)>(*this, lib, "glTexEnviv",SideEffects::worstDefault, "glTexEnviv")
	->args({"target","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwShowWindow)>(*this, lib, "glfwShowWindow",SideEffects::worstDefault, "glfwShowWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor4s)>(*this, lib, "glColor4s",SideEffects::worstDefault, "glColor4s")
	->args({"red","green","blue","alpha"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos2iv)>(*this, lib, "glRasterPos2iv",SideEffects::worstDefault, "glRasterPos2iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalCoord1dv)>(*this, lib, "glEvalCoord1dv",SideEffects::worstDefault, "glEvalCoord1dv")
	->args({"u"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glInitNames)>(*this, lib, "glInitNames",SideEffects::worstDefault, "glInitNames")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos2sv)>(*this, lib, "glRasterPos2sv",SideEffects::worstDefault, "glRasterPos2sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos2dv)>(*this, lib, "glRasterPos2dv",SideEffects::worstDefault, "glRasterPos2dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetVersion)>(*this, lib, "glfwGetVersion",SideEffects::worstDefault, "glfwGetVersion")
	->args({"major","minor","rev"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickButtons)>(*this, lib, "glfwGetJoystickButtons",SideEffects::worstDefault, "glfwGetJoystickButtons")
	->args({"jid","count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex2i)>(*this, lib, "glVertex2i",SideEffects::worstDefault, "glVertex2i")
	->args({"x","y"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos4s)>(*this, lib, "glRasterPos4s",SideEffects::worstDefault, "glRasterPos4s")
	->args({"x","y","z","w"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIsList)>(*this, lib, "glIsList",SideEffects::worstDefault, "glIsList")
	->args({"list"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLightf)>(*this, lib, "glLightf",SideEffects::worstDefault, "glLightf")
	->args({"light","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwTerminate)>(*this, lib, "glfwTerminate",SideEffects::worstDefault, "glfwTerminate")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord2dv)>(*this, lib, "glTexCoord2dv",SideEffects::worstDefault, "glTexCoord2dv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord2fv)>(*this, lib, "glTexCoord2fv",SideEffects::worstDefault, "glTexCoord2fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColor3i)>(*this, lib, "glColor3i",SideEffects::worstDefault, "glColor3i")
	->args({"red","green","blue"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glIndexMask)>(*this, lib, "glIndexMask",SideEffects::worstDefault, "glIndexMask")
	->args({"mask"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexImage2D)>(*this, lib, "glTexImage2D",SideEffects::worstDefault, "glTexImage2D")
	->args({"target","level","internalformat","width","height","border","format","type","pixels"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glColorPointer)>(*this, lib, "glColorPointer",SideEffects::worstDefault, "glColorPointer")
	->args({"size","type","stride","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMapGrid2f)>(*this, lib, "glMapGrid2f",SideEffects::worstDefault, "glMapGrid2f")
	->args({"un","u1","u2","vn","v1","v2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEdgeFlagv)>(*this, lib, "glEdgeFlagv",SideEffects::worstDefault, "glEdgeFlagv")
	->args({"flag"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexEnvfv)>(*this, lib, "glTexEnvfv",SideEffects::worstDefault, "glTexEnvfv")
	->args({"target","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalCoord2d)>(*this, lib, "glEvalCoord2d",SideEffects::worstDefault, "glEvalCoord2d")
	->args({"u","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetMaterialfv)>(*this, lib, "glGetMaterialfv",SideEffects::worstDefault, "glGetMaterialfv")
	->args({"face","pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLighti)>(*this, lib, "glLighti",SideEffects::worstDefault, "glLighti")
	->args({"light","pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glMapGrid2d)>(*this, lib, "glMapGrid2d",SideEffects::worstDefault, "glMapGrid2d")
	->args({"un","u1","u2","vn","v1","v2"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos2s)>(*this, lib, "glRasterPos2s",SideEffects::worstDefault, "glRasterPos2s")
	->args({"x","y"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos3s)>(*this, lib, "glRasterPos3s",SideEffects::worstDefault, "glRasterPos3s")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex2f)>(*this, lib, "glVertex2f",SideEffects::worstDefault, "glVertex2f")
	->args({"x","y"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTranslated)>(*this, lib, "glTranslated",SideEffects::worstDefault, "glTranslated")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glEvalCoord2f)>(*this, lib, "glEvalCoord2f",SideEffects::worstDefault, "glEvalCoord2f")
	->args({"u","v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorContentScale)>(*this, lib, "glfwGetMonitorContentScale",SideEffects::worstDefault, "glfwGetMonitorContentScale")
	->args({"monitor","xscale","yscale"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetInputMode)>(*this, lib, "glfwGetInputMode",SideEffects::worstDefault, "glfwGetInputMode")
	->args({"window","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glAccum)>(*this, lib, "glAccum",SideEffects::worstDefault, "glAccum")
	->args({"op","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex2d)>(*this, lib, "glVertex2d",SideEffects::worstDefault, "glVertex2d")
	->args({"x","y"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetInputMode)>(*this, lib, "glfwSetInputMode",SideEffects::worstDefault, "glfwSetInputMode")
	->args({"window","mode","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTranslatef)>(*this, lib, "glTranslatef",SideEffects::worstDefault, "glTranslatef")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glGetFloatv)>(*this, lib, "glGetFloatv",SideEffects::worstDefault, "glGetFloatv")
	->args({"pname","params"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos2fv)>(*this, lib, "glRasterPos2fv",SideEffects::worstDefault, "glRasterPos2fv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwWaitEvents)>(*this, lib, "glfwWaitEvents",SideEffects::worstDefault, "glfwWaitEvents")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos3i)>(*this, lib, "glRasterPos3i",SideEffects::worstDefault, "glRasterPos3i")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glLoadName)>(*this, lib, "glLoadName",SideEffects::worstDefault, "glLoadName")
	->args({"name"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glFogf)>(*this, lib, "glFogf",SideEffects::worstDefault, "glFogf")
	->args({"pname","param"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos3d)>(*this, lib, "glRasterPos3d",SideEffects::worstDefault, "glRasterPos3d")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetFramebufferSizeCallback)>(*this, lib, "glfwSetFramebufferSizeCallback",SideEffects::worstDefault, "glfwSetFramebufferSizeCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glRasterPos3f)>(*this, lib, "glRasterPos3f",SideEffects::worstDefault, "glRasterPos3f")
	->args({"x","y","z"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord2sv)>(*this, lib, "glTexCoord2sv",SideEffects::worstDefault, "glTexCoord2sv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glTexCoord2iv)>(*this, lib, "glTexCoord2iv",SideEffects::worstDefault, "glTexCoord2iv")
	->args({"v"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex4s)>(*this, lib, "glVertex4s",SideEffects::worstDefault, "glVertex4s")
	->args({"x","y","z","w"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glVertex2s)>(*this, lib, "glVertex2s",SideEffects::worstDefault, "glVertex2s")
	->args({"x","y"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowAttrib)>(*this, lib, "glfwGetWindowAttrib",SideEffects::worstDefault, "glfwGetWindowAttrib")
	->args({"window","attrib"})
;
#endif
