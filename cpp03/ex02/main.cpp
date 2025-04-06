#include "FragTrap.hpp"

int main()
{
	FragTrap ex1("Elephant");

	ex1.Stats();
	ex1.Attack("Doggy");
	ex1.Stats();
	ex1.takeDamage(5);
	ex1.Stats();
	ex1.beRepaired(30);
	ex1.highFivesGuys();
	ex1.takeDamage(60);
	ex1.highFivesGuys();
	ex1.Stats();
	
}