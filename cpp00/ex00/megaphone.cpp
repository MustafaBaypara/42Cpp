#include "iostream"

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		std::string ahmet;

		for (int j = 1; j < ac; j++)
			ahmet.append(av[j]);

		for (unsigned int i = 0; i < ahmet.length(); i++)
			ahmet[i] = toupper(ahmet[i]);

		std::cout << ahmet << std::endl;
	}
	return 0;
}