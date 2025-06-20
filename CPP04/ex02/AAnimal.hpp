#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	virtual ~AAnimal();

	std::string getType() const;

	// The '= 0' makes this a pure virtual function.
	// It forces subclasses to implement it and makes the class abstract.
	virtual void makeSound() const = 0;
};

#endif