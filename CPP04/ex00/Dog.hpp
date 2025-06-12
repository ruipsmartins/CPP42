#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(std::string type) : Animal(type){ std::cout << "Dog constructor called\n";}
        void makeSound() const {std::cout << "Woof!\n";} //overriding the Animal class's makeSound function
        ~Dog(){std::cout << "Dog destructor called\n";}
};

#endif