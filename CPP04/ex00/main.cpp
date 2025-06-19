#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "[ Animal tests ]" << std::endl;

		const Animal *dog = new Dog("Bulldog");
		const Animal *cat = new Cat();

		std::cout << "dog type: " << dog->getType() << std::endl;
		dog->makeSound();

		std::cout << "cat type: " << cat->getType() << std::endl;
		cat->makeSound();

		delete dog;
		delete cat;

		std::cout << "------------------------" << std::endl;
	}
	{
		std::cout << "[ WrongAnimal tests ]" << std::endl;

		const WrongAnimal *wrongAnimal = new WrongAnimal();
		const WrongAnimal *wrongCat = new WrongCat();

		std::cout << "wrongAnimal type: " << wrongAnimal->getType() << std::endl;
		wrongAnimal->makeSound();

		std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;
		wrongCat->makeSound();

		delete wrongAnimal;
		delete wrongCat;

		std::cout << "------------------------" << std::endl;
	}

	{
		std::cout << "[ 42 tests ]" << std::endl;
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
		std::cout << "------------------------" << std::endl;
	}

	return 0;
}