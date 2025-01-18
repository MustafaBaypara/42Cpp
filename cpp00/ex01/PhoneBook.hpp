#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "iomanip"
#include "sstream"
#include "Contact.hpp"
#include "cstdlib"

class PhoneBook
{
private:
	Contact Contact[8];
	int		i;
	int		max;
public:
	PhoneBook();
	void add();
	void search();
	void exit();
	void clear_line();
	std::string while_func(std::string);
	void print(std::string);
	void printl(std::string);
};

#endif