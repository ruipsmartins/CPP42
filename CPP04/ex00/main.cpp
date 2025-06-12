#include "Animal.hpp"
#include "Dog.hpp"
int main()
{
    Animal *dog = new Dog("Dog");
    dog->makeSound();
    delete dog;
    return 0;   
}