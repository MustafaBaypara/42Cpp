#include "Ice.hpp"

Ice::Ice() : AMateria::AMateria()
{
	this->type = "ice";
	std::cout << "Default constructor - Ice" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria::AMateria(copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor - Ice" << std::endl;
}

Ice& Ice::operator=(const Ice &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator - Ice" << std::endl;
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *copy = new Ice();
	return copy;
}

void Ice::use(ICharacter& target)
{
	std::cout << target.getName() << " doing use - Ice" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Default destructor - Ice" << std::endl;
}