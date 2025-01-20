#include "iostream"

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		std::string command;

		for (int j = 1; j < ac; j++)
			command.append(av[j]);

		for (unsigned int i = 0; i < command.length(); i++)
			command[i] = toupper(command[i]);

		std::cout << command << std::endl;
	}
	return 0;
}