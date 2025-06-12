#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(std::string type){this->type = type; std::cout << "Animal constructor called\n";}
        virtual void makeSound() const {std::cout << "animal sound\n";}
        virtual ~Animal(){std::cout << "Animal destructor called\n";}
};

#endif