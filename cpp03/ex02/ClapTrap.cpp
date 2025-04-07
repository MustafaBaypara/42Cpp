#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called." << std::endl;
	this->name = "undefined";
	this->hitPoints = 100;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor with name called." << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 10;
	this->attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return(*this);
}
void ClapTrap::Attack(const std::string &target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{	
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap cannot attack!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << " damage!" << std::endl;
		this->hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap cannot take any damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " repaired " << amount << " points!" << std::endl;
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << "They now have " << this->hitPoints << "!" << std::endl;
	}
}
void ClapTrap::Stats()
{
	std::cout << std::endl << "----------------------------------------" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Hit Points: " << this->hitPoints << std::endl;
	std::cout << "Energy Points: " << this->energyPoints << std::endl;
	std::cout << "----------------------------------------" << std::endl << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called." << std::endl;
}