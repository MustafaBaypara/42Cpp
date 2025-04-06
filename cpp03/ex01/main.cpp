#include "ScavTrap.hpp"

int main()
{
	ScavTrap ex1("Elephant");

	ex1.Stats();
	ex1.Attack("Doggy");
	ex1.Stats();
	ex1.takeDamage(5);
	ex1.Stats();
	ex1.beRepaired(30);
	ex1.guardGate();
	ex1.takeDamage(60);
	ex1.guardGate();
	ex1.Stats();
	
}