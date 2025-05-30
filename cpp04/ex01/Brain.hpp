#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain &operator=(const Brain& copy);
		std::string getIdeas(int index);
		void setIdeas(int index, std::string idea);

		~Brain();
};




#endif