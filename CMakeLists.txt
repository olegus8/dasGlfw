IF(NOT DAS_GLFW_INCLUDED)
    SET(DAS_GLFW_INCLUDED TRUE)
    MESSAGE(STATUS "dasGlfw module included.")

	SET(DAS_GLFW_DIR ${CMAKE_SOURCE_DIR}/modules/dasGlfw)

    LIST(APPEND CMAKE_MODULE_PATH ${DAS_GLFW_DIR})

    FIND_PACKAGE(glfw3)

	IF(NOT glfw3_FOUND)
		MESSAGE(STATUS "GLFW3 not found. Not building dasGlfw.")
	ELSE()
		# libDasModuleGlfw
		SET(DAS_GLFW_MODULE_SRC
			${DAS_GLFW_DIR}/src/module_glfw.cpp
		)
		ADD_MODULE_LIB(libDasModuleGlfw)
		ADD_MODULE_CPP(glfw)
		ADD_MODULE_NATIVE(glfw_boost)
		ADD_LIBRARY(libDasModuleGlfw ${DAS_GLFW_MODULE_SRC})
		TARGET_LINK_LIBRARIES(libDasModuleGlfw ${glfw_LIBRARIES})
		ADD_DEPENDENCIES(libDasModuleGlfw libDaScript libDasModuleGlfw)
		TARGET_INCLUDE_DIRECTORIES(libDasModuleGlfw PUBLIC ${glfw_INCLUDE_DIR})
		SETUP_CPP11(libDasModuleGlfw)
		# GENERATED GLFW
		FIND_FILE(GL_H REQUIRED "${glfw3_INCLUDE_DIR}/GL/gl.h")
		FIND_FILE(GLFW_H REQUIRED "${glfw3_INCLUDE_DIR}/GLFW/glfw3.h")
        SET(DAS_GLFW_CONSTS
            ${GL_H}
            ${GLFW_H}
        )
		CPP_BIND_AST(
			GLFW_GENERATE
			generate_glfw.das
			${DAS_GLFW_DIR}/src/glfw_headers.h
			${DAS_GLFW_DIR}/src/module_glfw
			${DAS_GLFW_DIR}/src
			${glfw_INCLUDE_DIR}
			"${DAS_GLFW_CONSTS}"
		)
	ENDIF()
ENDIF()
