#include "PhoneBook.hpp"
#include <sstream>

static bool is_digit(std::string command)
{
	for (size_t i=0; i < command.length(); i++) {
		if (!isdigit(command[i])) {
			return false;
		}
	}
	return true;
}

void PhoneBook::exit()
{
	clear_line();
	::exit(0);
}

void PhoneBook::clear_line()
{
	std::cout << "\033[2J\033[1;1H"<< std::endl;
}

void PhoneBook::print(std::string str)
{
	std::cout << str;
}

void PhoneBook::printl(std::string str)
{
	std::cout << str << std::endl;
}

PhoneBook::PhoneBook()
{
	this->i = 0;
}

void PhoneBook::add()
{
	while (1)
	{
		std::string command;

		clear_line();
		print("Enter the first name: ");
		std::getline(std::cin, command);
		if (command.empty())
		{
			if (std::cin.eof())
				exit();
			continue;
		}
		this->Contact[this->i].set_name(command);
		break;
	}
	while (1)
	{
		std::string command;

		clear_line();
		print("Enter the last name: ");
		std::getline(std::cin, command);
		if (command.empty())
		{
			if (std::cin.eof())
				exit();
			continue;
		}
		this->Contact[this->i].set_lastName(command);
		break;
	}
	while (1)
	{
		std::string command;

		clear_line();
		print("Enter the nick name: ");
		std::getline(std::cin, command);
		if (command.empty())
		{
			if (std::cin.eof())
				exit();
			continue;
		}
		this->Contact[this->i].set_nickName(command);
		break;
	}
	while (1)
	{
		std::string command;

		clear_line();
		print("Enter the number: ");
		std::getline(std::cin, command);
		if (command.empty())
		{
			if (std::cin.eof())
				exit();
			continue;
		}
		this->Contact[this->i].set_number(command);
		break;
	}
	while (1)
	{
		std::string command;

		clear_line();
		print("Enter the dark secret: ");
		std::getline(std::cin, command);
		if (command.empty())
		{
			if (std::cin.eof())
				exit();
			continue;
		}
		this->Contact[this->i].set_secret(command);
		break;
	}
	this->i++;
}


void PhoneBook::search()
{
	while (1)
	{
		std::string command;
		std::stringstream ss;
		clear_line();
		for (int i = 0; i < 8; i++) {
			
			ss << i + 1;
			if (!(Contact[i].get_name().empty()))
				print(ss.str()), print(" | "), print(Contact[i].get_name()), print(" | "), print(Contact[i].get_lastName()), print(" | "), print(Contact[i].get_nickName()), print(" | "), printl(Contact[i].get_number());
			ss << "";
		}
		print("Enter the index of Contact: ");
		std::getline(std::cin, command);
		if (command.empty())
		{
			if (std::cin.eof())
				exit();
			continue;
		}
		if (!is_digit(command))
			continue;

		break ;
	}
}