module;

#include <iostream>

module hello;

void hello() {
	std::cout << "Hello, modules! " << Test<int>::size() << "!" << std::endl;
}