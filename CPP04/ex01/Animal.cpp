#include "Animal.hpp"

Animal::Animal() : type("Unknown") { std::cout << "Animal default constructor called" << std::endl; }

Animal::Animal(std::string type) : type(type) { std::cout << "Animal constructor called" << std::endl; }

Animal::Animal(const Animal &other) : type(other.type) { std::cout << "Animal copy constructor called" << std::endl; }

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << "Animal assignment operator called" << std::endl;
	}
	return *this;
}

Animal::~Animal() { std::cout << "Animal destructor called" << std::endl; }

void Animal::makeSound() const { std::cout << "Animal sound" << std::endl; }

std::string Animal::getType() const { return type; }