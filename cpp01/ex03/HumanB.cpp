#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->hasWep = false;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	this->hasWep = true;
}

void HumanB::attack()
{
	if (this->hasWep)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " cannot attack." << std::endl;
}