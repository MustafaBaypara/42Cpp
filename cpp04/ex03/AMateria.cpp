#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "undefined";
	std::cout << "Default constructor - AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "Name Constructor called - AMateria" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor - AMateria" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator - AMateria" << std::endl;
	return (*this);
}

const std::string& AMateria::getType() const
{
	return(this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << " doing use - AMateria" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Default destructor - AMateria" << std::endl;
}