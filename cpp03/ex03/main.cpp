#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("Elephant");
	DiamondTrap b("Mickey");
	a.Stats();
	a.whoAmI();
	a.Attack("Hippo");
	b.Stats();
	b.whoAmI();
	b.Attack("Sam");
}