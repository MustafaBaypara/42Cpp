#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
storage()
{
	std::cout << "Default constructor - MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	std::cout << "Copy constructor - MateriaSource" << std::endl;
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
	for (size_t i = 0; i < 4; i++)
	{		
		if (this->storage[i] != NULL)
			delete this->storage[i];
		this->storage[i] = copy.storage[i];
	}

	std::cout << "Copy assignment operator - MateriaSource" << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->storage[i] == NULL)
		{
			this->storage[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->storage[i] && this->storage[i]->getType() == type)
			return this->storage[i]->clone();
	}
	return NULL;
}


MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->storage[i] != NULL)
			delete this->storage[i];
	}

	
	std::cout << "Default destructor - MateriaSource" << std::endl;
}