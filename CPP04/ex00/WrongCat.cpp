#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){ std::cout << "WrongCat default constructor called" << std::endl; }

WrongCat::WrongCat(std::string type) : WrongAnimal(type)  { std::cout << "WrongCat constructor called" << std::endl; }

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) { std::cout << "WrongCat copy constructor called" << std::endl; }

WrongCat::~WrongCat() { std::cout << "WrongCat destructor called" << std::endl; }

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << "WrongCat assignment operator called" << std::endl;
	}
	return *this;
}

void WrongCat::makeSound() const // overriding the Animal class's makeSound function
{
	std::cout << "Wrong Meow!" << std::endl;
}