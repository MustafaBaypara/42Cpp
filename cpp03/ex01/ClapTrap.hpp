#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
	protected:
		std::string name;
		int 		hitPoints;
		int 		energyPoints;
		int			attackDamage;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap& operator=(const ClapTrap &copy);
		void Attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void Stats();
		
		
		~ClapTrap();
};


#endif