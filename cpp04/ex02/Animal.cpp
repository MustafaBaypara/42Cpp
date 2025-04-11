#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Default constructor - Animal" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor - Animal" << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator - Animal" << std::endl;
	return (*this);
}

std::string Animal::getType() const
{
	return(this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal Sound!" << std::endl;
}


Animal::~Animal()
{
	std::cout << "Default destructor - Animal" << std::endl;
}