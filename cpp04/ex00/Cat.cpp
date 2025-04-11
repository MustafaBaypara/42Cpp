#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default constructor - Cat" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor - Cat" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator - Cat" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default destructor - Cat" << std::endl;
}