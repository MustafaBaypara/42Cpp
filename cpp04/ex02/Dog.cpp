#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default constructor - Dog" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Copy constructor - Dog" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Copy assignment operator - Dog" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog Sound!" << std::endl;
}

std::string Dog::getIdeas(int index)
{
	return this->brain->getIdeas(index);
}

void Dog::setIdeas(int index, std::string idea)
{
	this->brain->setIdeas(index, idea);
}

Dog::~Dog()
{
	std::cout << "Default destructor - Dog" << std::endl;
	delete this->brain;
}