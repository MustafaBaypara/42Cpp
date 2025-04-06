#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("test");
	std::cout << std::endl;
	DiamondTrap b("Guts");
	std::cout << std::endl;
	std::cout << std::endl;
	a.Stats();
	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;
	a.Attack("a ferocious enemy");
	std::cout << std::endl;
	std::cout << std::endl;
	b.Stats();
	std::cout << std::endl;
	b.whoAmI();
	std::cout << std::endl;
	b.Attack("Griffith");
	std::cout << std::endl;
	std::cout << std::endl;
}