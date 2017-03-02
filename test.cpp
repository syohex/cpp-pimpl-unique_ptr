#include <iostream>
#include "test.h"

struct TestImpl {
};

Test::Test() {
}

Test::~Test() {
}

void Test::Hello() {
	std::cout << "hello world" << std::endl;
}
