#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "Memory adress of the string: " << &str << std::endl;
	std::cout << "Memory adress held by pointer: " << stringPTR << std::endl;
	std::cout << "Memory adress held by reference; " << &stringREF << std::endl;
	std::cout << "================================" << std::endl;
	std::cout << "String " << str << std::endl;
	std::cout << "String of pointed to by pointer: " << *stringPTR << std::endl;
	std::cout << "String of pointed to by reference: " << stringREF << std::endl;
}