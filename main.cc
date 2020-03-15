#include<iostream>
#include<memory>

#include "string_builder.h"

namespace tu = tark::utils;

int main(int argc, char **argv)
{
	auto sb = std::make_unique<tu::StringBuilder>();

	auto string = sb->BuildString(tu::StringBuilder::HelloWorld);

	std::cout << string << std::endl;
	std::cin.get();

	return 0;
}