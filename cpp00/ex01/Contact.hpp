#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "iostream"

class Contact
{
private:
	std::string name;
	std::string lastName;
	std::string nickName;
	std::string number;
	std::string secret;
public:
	std::string get_name();
	void set_name(std::string);
	std::string get_lastName();
	void set_lastName(std::string);
	std::string get_nickName();
	void set_nickName(std::string);
	std::string get_number();
	void set_number(std::string);
	std::string get_secret();
	void set_secret(std::string);

};

#endif