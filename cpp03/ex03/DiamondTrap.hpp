#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
			std::string name;
	public :
			DiamondTrap();
			DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap &copy);
			DiamondTrap &operator=(const DiamondTrap &copy);
			void whoAmI();
			void Stats();

			~DiamondTrap();
};

#endif