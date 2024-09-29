#include "say_hello.h"
#include <iostream>
#include <glm/glm.hpp>
#include <format>

void say_hello()
{
	glm::vec4 a;
	a.x = 5;
	a.y = 3;
	std::cout << std::format("The vec is ({},{},{},{})",a.x,a.y,a.z,a.w) << std::endl;
}
