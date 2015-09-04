#include "src\graphics\window.h"
#include "src\maths\maths.h"
#include <glfw3.h>
#include <iostream>
int main() {
	using namespace u_engine;
	using namespace graphics;
	using namespace maths;

	Window window("Untitled Engine", 1280, 720);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	vec4 a(1.0f, 2.0f, 3.0f , 1.0f);
	vec4 b(2, 4, 6, 1);

	vec4 c = a * b;
	

	mat4 position = mat4::translation(vec3(2, 3, 4));
	position *= mat4::identity();

	position.elements[2] = 2.0f;

	vec4 column = position.columns[3];

	std::cout << std::endl;
	std::cout << column << std::endl;

	while (!window.closed()) {
		window.clear();
		

#if 1
		glBegin(GL_QUADS);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(-0.5f, 0.5f);
		glVertex2f(0.5f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();
#else
		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
#endif

		window.update();
	}


	return 0;
}