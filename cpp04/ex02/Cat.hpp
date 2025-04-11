#ifndef CAT_HPP
#define CAT_HPP


#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat& copy);
		Cat &operator=(const Cat& copy);
		void makeSound() const;
		void setIdeas(int index, std::string idea);
		std::string getIdeas(int index);

		~Cat();
};




#endif