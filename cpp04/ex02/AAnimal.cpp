#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << "Default constructor - AAnimal" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor - AAnimal" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator - AAnimal" << std::endl;
	return (*this);
}

std::string AAnimal::getType() const
{
	return(this->type);
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal Sound!" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Default destructor - AAnimal" << std::endl;
}