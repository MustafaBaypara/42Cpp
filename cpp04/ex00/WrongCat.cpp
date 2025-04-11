#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default constructor - WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor - WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator - WrongCat" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Sound!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Default destructor - WrongCat" << std::endl;
}