#pragma once

#include <memory>

struct TestImpl;
struct Test {
	Test();
	~Test(); // Default destructor causes link error

	std::unique_ptr<TestImpl> impl;
	void Hello();
};
