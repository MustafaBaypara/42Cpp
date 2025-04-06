#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called. ScavTrap" << std::endl;
	this->name = "undefined";
	this->hitPoints = ClapTrap::hitPoints;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Constructor with name called. ScavTrap" << std::endl;
	this->name = name;
	this->hitPoints = ClapTrap::hitPoints;
	this->energyPoints = 50;
	this->attackDamage = 20;
}
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor called. ScavTrap" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Copy assignment operator called. ScavTrap" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return(*this);
}
void ScavTrap::Attack(const std::string &target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{	
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ScavTrap cannot attack!" << std::endl;
}
void ScavTrap::guardGate()
{
	if (this->hitPoints > 0)
		std::cout << "ScavTrap " << this->name << ": Ohh Ugh grumbled!!!" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " are gone and nothing here!" << std::endl;
}
void ScavTrap::Stats()
{
	std::cout << std::endl << "----------------------------------------" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Hit Points: " << this->hitPoints << std::endl;
	std::cout << "Energy Points: " << this->energyPoints << std::endl;
	std::cout << "----------------------------------------" << std::endl << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Default destructor called. ScavTrap" << std::endl;
}