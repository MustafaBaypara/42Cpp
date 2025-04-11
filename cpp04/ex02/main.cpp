
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();


delete j;
delete i;

std::cout << std::endl;

Dog puppy;
Dog chuck = puppy;


puppy.setIdeas(0, "Hello world");
puppy.setIdeas(1, "nice world");
puppy.setIdeas(2, "bye world");

chuck.~Dog();

chuck = puppy;

std::cout << chuck.getIdeas(0) << std::endl;


for (size_t i = 0; i < 3; i++)
{
	std::cout << chuck.getIdeas(i) << std::endl;
}


std::cout << std::endl;

const Animal* zoo[5];

for (size_t i = 0; i < 5; i++)
{
	zoo[i] = new Cat();
}

std::cout << "here" << std::endl;
delete zoo[0];
delete zoo[1];
delete zoo[2];
delete zoo[3];
delete zoo[4];
std::cout << "here" << std::endl;


return 0;
}