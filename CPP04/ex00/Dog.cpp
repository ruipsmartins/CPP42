#include "Dog.hpp"

Dog::Dog() : Animal("Dog") { std::cout << "Dog default constructor called" << std::endl; }

Dog::Dog(std::string type) : Animal(type) { std::cout << "Dog constructor called" << std::endl; }

Dog::Dog(const Dog &other) : Animal(other) { std::cout << "Dog copy constructor called" << std::endl; }

Dog::~Dog() { std::cout << "Dog destructor called" << std::endl; }

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << "Dog assignment operator called" << std::endl;
	}
	return *this;
}

void Dog::makeSound() const // overriding the Animal class's makeSound function
{
	std::cout << "Woof!" << std::endl;
}