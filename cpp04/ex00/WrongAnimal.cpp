#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "Default constructor - WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor - WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator - WrongAnimal" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound!" << std::endl;
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "Default destructor - WrongAnimal" << std::endl;
}