// cmake-project.cpp : Defines the entry point for the application.
//

#include "cmake-project.h"

#if BUILD_TYPE == DEBUG
#define LOG(x) std::cout << x << std::endl
#elif BUILD_TYPE == RELEASED
#define LOG(x)
#endif

int main()
{
	std::cout << "Hello CMake." << std::endl;

	LOG("testing");

	hello::sayHello();

	return 0;
}
