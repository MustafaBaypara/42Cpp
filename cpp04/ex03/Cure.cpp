#include "Cure.hpp"

Cure::Cure() : AMateria::AMateria()
{
	this->type = "cure";
	std::cout << "Default constructor - Cure" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria::AMateria(copy)
{
	this->type = copy.type;
	std::cout << "Copy constructor - Cure" << std::endl;
}

Cure& Cure::operator=(const Cure &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator - Cure" << std::endl;
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria *copy = new Cure();
	return copy;
}

void Cure::use(ICharacter& target)
{
	std::cout << target.getName() << " doing use - Cure" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Default destructor - Cure" << std::endl;
}