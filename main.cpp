#include<iostream>
#include<thread>
#include<GL/glew.h>
#include<GLFW/glfw3.h>

#define GLEW_STATIC


using namespace std;

int main() {
// Initialize glfw
    glfwInit();

//    Set specific parameters like OPENGL versions and profile to use.
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

//    Make window non_resizable
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

//    Create openGL window and set it as current context. The second last nullptr controls fullscreen or not.
    GLFWwindow* window = glfwCreateWindow(800, 600, "First Window", nullptr, nullptr);
    glfwMakeContextCurrent(window);

//    Setup GLEW and initialize.
    glewExperimental = GL_TRUE;
    glewInit();


    GLuint vertexBuffer;
    glGenBuffers(1, &vertexBuffer);
    printf("%u\n", vertexBuffer);


    do{
        glfwSwapBuffers(window);
        glfwPollEvents();
        if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, GL_TRUE);
    }while(!glfwWindowShouldClose(window));

    glfwTerminate();


    return 0;
}