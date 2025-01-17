#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "iostream"
#include "Contact.hpp"
#include "stdlib.h"

class PhoneBook
{
private:
	Contact Contact[8];
	int		i;
public:
	PhoneBook();
	void add();
	void search();
	void exit();
	void clear_line();
	void print(std::string);
	void printl(std::string);
};

#endif