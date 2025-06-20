#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Unknown") { std::cout << "Animal default constructor called" << std::endl; }

AAnimal::AAnimal(std::string type) : type(type) { std::cout << "Animal constructor called" << std::endl; }

AAnimal::AAnimal(const AAnimal &other) : type(other.type) { std::cout << "Animal copy constructor called" << std::endl; }

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << "Animal assignment operator called" << std::endl;
	}
	return *this;
}

AAnimal::~AAnimal() { std::cout << "Animal destructor called" << std::endl; }

void AAnimal::makeSound() const { std::cout << "Animal sound" << std::endl; }

std::string AAnimal::getType() const { return type; }