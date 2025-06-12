#include "Animal.hpp"

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal constructor called\n";
}

void Animal::makeSound() const
{
    std::cout << "animal sound\n";
}

Animal::Animal(const Animal &other)
{
    this->type = other.type;
    std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(const Animal &other)
{
    this->type = other.type;
    std::cout << "Animal assignment operator called\n";
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}


std::string Animal::getType() const
{
    return type;
}