#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
	Zombie myZombie = Zombie(name);
	myZombie.announce();
}
