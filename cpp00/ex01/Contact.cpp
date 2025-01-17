#include "Contact.hpp"

std::string Contact::get_name()
{
	return this->name;
}

void Contact::set_name(std::string name)
{
	this->name = name;
}

std::string Contact::get_lastName()
{
	return this->lastName;
}

void Contact::set_lastName(std::string lastName)
{
	this->lastName = lastName;
}
std::string Contact::get_nickName()
{
	return this->nickName;
}

void Contact::set_nickName(std::string nickName)
{
	this->nickName = nickName;
}
std::string Contact::get_number()
{
	return this->number;
}

void Contact::set_number(std::string number)
{
	this->number = number;
}
std::string Contact::get_secret()
{
	return this->secret;
}

void Contact::set_secret(std::string secret)
{
	this->secret = secret;
}