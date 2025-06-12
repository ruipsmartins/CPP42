#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(std::string type);
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual void makeSound() const;
        virtual ~Animal();

        std::string getType() const;
};

#endif