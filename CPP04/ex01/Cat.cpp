#include "Cat.hpp"

Cat::Cat() : Animal("Cat") { std::cout << "Cat default constructor called" << std::endl; }

Cat::Cat(std::string type) : Animal(type) { std::cout << "Cat constructor called" << std::endl; }

Cat::Cat(const Cat &other) : Animal(other) { std::cout << "Cat copy constructor called" << std::endl; }

Cat::~Cat() { std::cout << "Cat destructor called" << std::endl; }

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << "Cat assignment operator called" << std::endl;
	}
	return *this;
}

void Cat::makeSound() const // overriding the Animal class's makeSound function
{
	std::cout << "Meow!" << std::endl;
}