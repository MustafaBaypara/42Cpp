#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default constructor - Dog" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor - Dog" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator - Dog" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog Sound!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default destructor - Dog" << std::endl;
}