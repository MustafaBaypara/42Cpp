#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default constructor - Cat" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Copy constructor - Cat" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Copy assignment operator - Cat" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound!" << std::endl;
}

std::string Cat::getIdeas(int index)
{
	return this->brain->getIdeas(index);
}

void Cat::setIdeas(int index, std::string idea)
{
	this->brain->setIdeas(index, idea);
}

Cat::~Cat()
{
	std::cout << "Default destructor - Cat" << std::endl;
	delete this->brain;
}