#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor called. FragTrap" << std::endl;
	this->name = "undefined";
	this->hitPoints = ClapTrap::hitPoints;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Constructor with name called. FragTrap" << std::endl;
	this->name = name;
	this->hitPoints = ClapTrap::hitPoints;
	this->energyPoints = 100;
	this->attackDamage = 30;
}
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor called. FragTrap" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
}
FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "Copy assignment operator called. FragTrap" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return(*this);
}
void FragTrap::highFivesGuys(void)
{
	if (this->hitPoints > 0)
		std::cout << "FragTrap " << this->name << ": doing high five!!" << std::endl;
	else
		std::cout << "FragTrap " << this->name << ": cannot high five!!" << std::endl;
}
void FragTrap::Stats()
{
	std::cout << std::endl << "----------------------------------------" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Hit Points: " << this->hitPoints << std::endl;
	std::cout << "Energy Points: " << this->energyPoints << std::endl;
	std::cout << "----------------------------------------" << std::endl << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "Default destructor called. FragTrap" << std::endl;
}