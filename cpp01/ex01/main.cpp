#include "Zombie.hpp"

int main()
{
	Zombie myZombie = Zombie("Marvin");

	myZombie.announce();

	std::cout << "..............i hear some zombies..............." << std::endl;

	Zombie *look = myZombie.zombieHorde(3, "Drowned");

	for (int i=0; i<3; i++)
	{
		look[i].announce();
	}

	delete[] look;
	return (0);
}