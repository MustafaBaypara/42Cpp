#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{
	protected:
		AMateria *storage[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource& operator=(const MateriaSource &copy);
		
		
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
		
		
		
		~MateriaSource();

};


#endif