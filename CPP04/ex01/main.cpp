#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// Function to test the deep copy of Dog
void testDogCopy()
{
	std::cout << "-----Testing Dog copy constructor and assignment operator-----" << std::endl;

	Dog *originalDog = new Dog();

	originalDog->getBrain()->setIdea(0, "running around");
	std::cout << "Original Dog's idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
	// copy constructor
	// Dog *copyDog = new Dog(*originalDog);

	// copy asingnment operator
	Dog *copyDog = new Dog();
	*copyDog = *originalDog;

	std::cout << "Copy Dog's idea before change: " << copyDog->getBrain()->getIdea(0) << std::endl;

	copyDog->getBrain()->setIdea(0, "sleeping on the couch");

	std::cout << "Original Dog's idea after change: " << originalDog->getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy Dog's idea after change: " << copyDog->getBrain()->getIdea(0) << std::endl;

	delete originalDog;
	delete copyDog;
}

//function to test the deep copy of Cat
void testCatCopy()
{
	std::cout << "-----Testing Cat copy constructor and assignment operator-----" << std::endl;

	Cat* originalCat = new Cat();

	originalCat->getBrain()->setIdea(0, "staring at the wall");
	std::cout << "Original Cat's idea: " << originalCat->getBrain()->getIdea(0) << std::endl;
	// copy constructor
	// Cat* copyCat = new Cat(*originalCat);

	// copy assignment operator
	Cat* copyCat = new Cat();
	*copyCat = *originalCat;

	std::cout << "Copy Cat's idea before change: " << copyCat->getBrain()->getIdea(0) << std::endl;

	copyCat->getBrain()->setIdea(0, "knocking things off the table");

	std::cout << "Original Cat's idea after change: " << originalCat->getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy Cat's idea after change: " << copyCat->getBrain()->getIdea(0) << std::endl;

	delete originalCat;
	delete copyCat;
}
int main()
{
	/* { //42 test
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		delete j; // should not create a leak
		delete i;
	} */

	{	//testing deep copy of Dog and cat
		testDogCopy();
		testCatCopy();
	}
	
	/* {	//test with array of animals
		Animal *animals[10];
		for (int i = 0; i < 5; ++i)
		{
			animals[i] = new Dog();
		}
		for (int i = 5; i < 10; ++i)
		{
			animals[i] = new Cat();
		}
		for (int i = 0; i < 10; ++i)
		{
			std::cout << "Animal " << i << " type: " << animals[i]->getType() << std::endl;
			animals[i]->makeSound();
			delete animals[i];
		}
	} */
	return 0;
}