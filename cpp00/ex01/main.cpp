#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "iostream"

int main()
{
	PhoneBook pb;

	while (1)
	{
		std::string command;

		std::cout << "1. ADD" << std::endl;
		std::cout << "2. SEARCH" << std::endl;
		std::cout << "3. EXIT" << std::endl;
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (command.empty())
		{
			if (std::cin.eof())
				pb.exit();
			continue;
		}

		if (!command.compare("1") || !command.compare("2") || !command.compare("3"))
			std::cout << "please write a command instead of number." << std::endl;
		else if (!command.compare("ADD"))
			pb.add();
		else if (!command.compare("SEARCH"))
			pb.search();
		else if (!command.compare("EXIT"))
			pb.exit();
		
		std::cout << command << std::endl;
	}
}