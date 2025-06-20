#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
	void makeSound() const;
	Brain *getBrain() const;
};

#endif