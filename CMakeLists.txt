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
			${DAS_GLFW_DIR}/src/module_glfw.cpp_inc
			${DAS_GLFW_DIR}/src/module_glfw.const_inc
			${DAS_GLFW_DIR}/src/module_glfw.inc
		)
		ADD_MODULE_LIB(libDasModuleGlfw)
		ADD_MODULE_CPP(glfw)
		ADD_MODULE_NATIVE(glfw_boost)
		ADD_LIBRARY(libDasModuleGlfw ${DAS_GLFW_MODULE_SRC})
		TARGET_LINK_LIBRARIES(libDasModuleGlfw ${glfw_LIBRARIES})
		ADD_DEPENDENCIES(libDasModuleGlfw libDaScript)
		TARGET_INCLUDE_DIRECTORIES(libDasModuleGlfw PUBLIC ${glfw_INCLUDE_DIR})
		SETUP_CPP11(libDasModuleGlfw)

        FIND_FILE(GL_H "GL/gl.h")

		# GENERATED GLFW
        SET(DAS_GLFW_CONSTS
            "${glfw_INCLUDE_DIR}/GLFW/glfw3.h"
            "${GL_H}"
        )

        MESSAGE(STATUS "DAS_GLFW_CONSTS=${DAS_GLFW_CONSTS}")
        MESSAGE(FATAL_ERROR "stopping intentionally")

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
