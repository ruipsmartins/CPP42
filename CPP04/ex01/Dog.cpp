#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		std::cout << "Dog assignment operator called" << std::endl;
		this->type = other.type;
		if (brain)
			delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

void Dog::makeSound() const // overriding the Animal class's makeSound function
{
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain() const
{
	if (this->brain)
	{
		return this->brain;
	}
	return NULL;
}