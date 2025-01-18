#include "PhoneBook.hpp"

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
	this->max = 0;
}

static bool is_digit(std::string command)
{
	for (size_t i=0; i < command.length(); i++) {
		if (!isdigit(command[i])) {
			return false;
		}
	}
	return true;
}

static bool check_empty(std::string str)
{
	for (int i=0; str[i]; i++)
	{
		if (str[i] == '\t' || str[i] == ' ')
			continue;
		return true;
	}
	return false;
}

std::string PhoneBook::while_func(std::string str)
{
	std::string command;
	while (1)
	{
		clear_line();
		print(str);
		std::getline(std::cin, command);
		if (command.empty())
		{
			if (std::cin.eof())
				exit();
			continue;
		}
		if (!check_empty(command) || (str == "Enter the number: " && !is_digit(command)))
			continue;
		break;
	}
	return command;
}

void PhoneBook::add()
{
	std::string command;

	command = while_func("Enter the first name: ");
	this->Contact[this->i].set_name(command);
	command = while_func("Enter the last name: ");
	this->Contact[this->i].set_lastName(command);
	command = while_func("Enter the nick name: ");
	this->Contact[this->i].set_nickName(command);
	command = while_func("Enter the number: ");
	this->Contact[this->i].set_number(command);
	command = while_func("Enter the darkest secret: ");
	this->Contact[this->i].set_secret(command);
	this->i++;
	if (this->max < this->i)
		this->max = this->i;
	if (this->i == 8)
		this->i = 0;
	clear_line();
}

void PhoneBook::search()
{
	std::string command;
	std::string tmp;
	std::stringstream ss;
	while (1)
	{
		clear_line();
		for (int i = 0; i < 8; i++) {
			ss.str("");
			ss << (i + 1);
			if (!(Contact[i].get_name().empty())) {
				std::stringstream formattedOutput;
				formattedOutput << std::setw(10) << ss.str() << "|";
				tmp = Contact[i].get_name();
				formattedOutput << std::setw(11) << (!(tmp.length() > 10) ? (tmp.substr(0, 10) + "|") : (tmp.substr(0, 9) + ".|"));
				tmp = Contact[i].get_lastName();
				formattedOutput << std::setw(11) << (!(tmp.length() > 10) ? (tmp.substr(0, 10) + "|") : (tmp.substr(0, 9) + ".|"));
				tmp = Contact[i].get_nickName();
				formattedOutput << std::setw(10) << (!(tmp.length() > 10) ? (tmp.substr(0, 10)) : (tmp.substr(0, 9) + "."));
				print(formattedOutput.str() + "\n");
			}
		}
		print("Enter the index of Contact: ");
		std::getline(std::cin, command);
		if (command.empty())
		{
			if (std::cin.eof())
				exit();
			continue;
		}
		if (!check_empty(command) || !is_digit(command))
			continue;
		ss.str("");
		ss << (std::atoi(command.c_str()) - 1);
		clear_line();
		break ;
	}

	if ((this->max <= std::atoi(ss.str().c_str())) || std::atoi(ss.str().c_str()) + 1 <= 0)
		return;

	printl("First name: " + Contact[std::atoi(ss.str().c_str())].get_name());
	printl("Last name: " + Contact[std::atoi(ss.str().c_str())].get_lastName());
	printl("Nick name: " + Contact[std::atoi(ss.str().c_str())].get_nickName());
	printl("Number: " + Contact[std::atoi(ss.str().c_str())].get_number());
	printl("Darkest secret: " + Contact[std::atoi(ss.str().c_str())].get_secret());
	printl("");
}