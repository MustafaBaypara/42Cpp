#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor - Brain" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = copy.ideas[i];
	}
	std::cout << "Copy constructor - Brain" << std::endl;
}

Brain& Brain::operator=(const Brain &copy)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = copy.ideas[i];
	}
	std::cout << "Copy assignment operator - Brain" << std::endl;
	return (*this);
}

std::string Brain::getIdeas(int index)
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return "none here";
}

void Brain::setIdeas(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}


Brain::~Brain()
{
	std::cout << "Default destructor - Brain" << std::endl;
}