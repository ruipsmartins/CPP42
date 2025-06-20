#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	/* AAnimal *animal = new AAnimal();	//compiler error, cannot instantiate abstract class
	animal->makeSound();
	delete animal;	 */	

	AAnimal *dog = new Dog();
	AAnimal *cat = new Cat();

	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;

	return 0;
}