#include <GLFW/glfw3.h>
#include <adder.h>
#include <iostream>
#include <OLASConfig.h>

int main(int argc, char* argv[])
{
  std::cout << "Hey, Zues!\n";
  std::cout << add(72.1, 73.8) << '\n';

  std::cout << argv[0] << " Version " << OLAS_VERSION_MAJOR << "." << OLAS_VERSION_MINOR << '\n';

  GLFWwindow *window;

  if (!glfwInit()) {
    fprintf(stderr, "Failed to initialize GLFW\n");
    exit(EXIT_FAILURE);
  }

  window = glfwCreateWindow(300, 300, "Gears", NULL, NULL);
  if (!window) {
    fprintf(stderr, "Failed to open GLFW window\n");
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  // Main loop
  while (!glfwWindowShouldClose(window)) {
    // Draw gears
    /* draw(); */

    // Update animation
    /* animate(); */

    // Swap buffers
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  // Terminate GLFW
  glfwTerminate();

  return 0;
}
