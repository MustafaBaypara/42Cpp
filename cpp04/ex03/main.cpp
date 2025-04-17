

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	IMateriaSource *source = new MateriaSource();

	Character Chiko("Chiko");

	source->learnMateria(new Ice());

	Chiko.equip(source->createMateria("ice"));
	Chiko.use(0, Chiko);
	Chiko.unequip(0);
	Chiko.use(0, Chiko);
	Chiko.equip(Chiko.getFloor());
	Chiko.use(0, Chiko);
	Chiko.unequip(0);

	delete source;

	return 0;
}