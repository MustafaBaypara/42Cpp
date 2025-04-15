#include "Character.hpp"

Character::Character()
{
	std::cout << "Default constructor - Character" << std::endl;
}

Character::Character(const std::string copy)
{
	std::cout << "Name Copy constructor - Character" << std::endl;
	this->name = copy;
}

Character::Character(const Character& copy)
{
	std::cout << "Copy constructor - Character" << std::endl;
	*this = copy;
}

Character& Character::operator=(const Character &copy)
{
	this->name = copy.name;
	for (size_t i = 0; i < 4; i++)
	{		
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		this->inventory[i] = copy.inventory[i];
	}

	std::cout << "Copy assignment operator - Character" << std::endl;
	return *this;
}

const std::string& Character::getName() const
{
	return this->name;
}

AMateria* Character::getFloor()
{
	return this->floor;
}

void Character::setFloor(AMateria *m)
{
	if (this->getFloor() != NULL)
		delete this->floor;
	this->floor = m;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx>=0 && idx<4 && this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << "not using" << std::endl;
	
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break;
		}
	}
	
}

void Character::unequip(int idx)
{
	if (this->inventory[idx])
	{
		this->setFloor(this->inventory[idx]);
		this->inventory[idx] = NULL;
	}
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	if (this->getFloor() != NULL)
		delete this->floor;

	
	std::cout << "Default destructor - Character" << std::endl;
}