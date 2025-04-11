
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
const WrongAnimal* wc = new WrongCat();
std::cout << wc->getType() << " " << std::endl;
wc->makeSound();

delete(i);
delete(j);
delete(meta);
delete(wc);

return 0;
}