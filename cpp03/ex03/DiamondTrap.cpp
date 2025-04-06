#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor called. DiamondTrap" << std::endl;
	this->name = "undefined";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
: FragTrap(name + "_clap_name")
{
	std::cout << "Constructor with name called. DiamondTrap" << std::endl;
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
: ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "Copy constructor called. DiamondTrap" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "Copy assignment operator called. DiamondTrap" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return(*this);
}
void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->name << std::endl;
	std::cout << "ClapTrap " << ClapTrap::name << std::endl;
}
void DiamondTrap::Stats()
{
	std::cout << std::endl << "----------------------------------------" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Hit Points: " << this->hitPoints << std::endl;
	std::cout << "Energy Points: " << this->energyPoints << std::endl;
	std::cout << "Attack Damage: " << this->attackDamage<< std::endl;
	std::cout << "----------------------------------------" << std::endl << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "Default destructor called. DiamondTrap" << std::endl;
}