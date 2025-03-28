#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called." << std::endl;
	this->name = "undefined";
	this->hitpoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor with name called." << std::endl;
	this->name = name;
	this->hitpoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Constructor with name called." << std::endl;
	this->name = copy.name;
	this->hitpoints = copy.hitpoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->name = copy.name;
	this->hitpoints = copy.hitpoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return(*this);
}