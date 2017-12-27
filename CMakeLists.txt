cmake_minimum_required(VERSION 3.9)
project(OpenGLPractise)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

find_package(PkgConfig REQUIRED)

pkg_search_module(GLEW REQUIRED glew)
include_directories(${GLEW_INCLUDE_DIRS})

pkg_search_module(GLFW REQUIRED glfw3)
include_directories(${GLFW_INCLUDE_DIRS})

add_executable (output main.cpp)

target_link_libraries(output ${GLFW_LIBRARIES} ${GLEW_LIBRARIES})

#target_link_libraries(simple ${GLFW_STATIC_LIBRARIES})



#find_package(OpenGL REQUIRED)
#
#set(CMAKE_CXX_FLAGS "-O2 -Wall -Wextra")
#
#SET(LIBRARIES glfw ${GLFW_LIBRARIES} ${GLXW_LIBRARY} ${OPENGL_LIBRARY} ${CMAKE_DL_LIBS})
#
##add_executable(OpenGLPractise main.cpp test.cpp)
#find_package(GLUT REQUIRED)
#
#set(SOURCE_FILES main.cpp test.cpp)
#
#add_executable(output ${SOURCE_FILES})
#target_link_libraries(OpenGLPractise ${LIBRARIES} )