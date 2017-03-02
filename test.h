#pragma once

#include <memory>

struct TestImpl;
struct Test {
	Test();
	~Test();

	std::unique_ptr<TestImpl> impl;
	void Hello();
};
