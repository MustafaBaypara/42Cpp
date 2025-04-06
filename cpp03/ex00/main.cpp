#include "ClapTrap.hpp"

int main()
{
	ClapTrap ex1("Monkey");

	ex1.Stats();
	ex1.Attack("Doggy");
	ex1.Stats();
	ex1.takeDamage(1);
	ex1.Stats();
	ex1.beRepaired(2);
	ex1.Stats();
	for (size_t i = 0; i <= 10; i++)
	{
		ex1.Attack("Doggy");
	}
	for (size_t i = 0; i <= 13; i++)
	{
		ex1.takeDamage(1);
	}
	ex1.Stats();
	
}