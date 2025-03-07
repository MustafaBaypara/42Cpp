#include "Zombie.hpp"

int main()
{
	Zombie myZombie = Zombie("Marvin");

	myZombie.announce();

	Zombie *look = myZombie.newZombie("Luke");

	look->announce();

	look->randomChump("Pointio");
	delete look;
	return (0);
}