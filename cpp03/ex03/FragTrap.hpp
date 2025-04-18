#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap &copy);
			FragTrap &operator=(const FragTrap &copy);
			void highFivesGuys(void);
			void Stats();

			~FragTrap();
};

#endif