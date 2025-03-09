#include "Harl.hpp"


void Harl::debug( void )
{
	std::cout << "DEBUG\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "INFO\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
 	std::cout << "WARNING\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error( void )
{
	std::cout << "ERROR\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
	size_t j = 4;
	void (Harl::*func[])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
	std::string funcList[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if (funcList[i] == level){
			j = i;
			break;}
	}

	switch (j)	
	{
	case 0:	
		(this->*func[0])();
	case 1:	
		(this->*func[1])();
	case 2:	
		(this->*func[2])();
	case 3:	
		(this->*func[3])();
		break;
	
	default:
		std::cout << "unexpected input" << std::endl;
	}
	
}