#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *Zombies = new Zombie[N];

	for (int i=0; i < N; i++)
	{
		Zombies[i].name = name;
	}
	return (Zombies);
}