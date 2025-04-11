#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog& copy);
		Dog &operator=(const Dog& copy);
		void makeSound() const;
		void setIdeas(int index, std::string idea);
		std::string getIdeas(int index);

		~Dog();
};




#endif