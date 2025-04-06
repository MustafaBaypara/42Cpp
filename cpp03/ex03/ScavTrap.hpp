#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap &copy);
			ScavTrap &operator=(const ScavTrap &copy);
			void Attack(const std::string &target);
			void guardGate();
			void Stats();

			~ScavTrap();
};

#endif