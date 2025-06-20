#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (size_t i = 0; i < 100; ++i)
	{
		this->ideas[i] = other.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 100; ++i)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(unsigned int index, const std::string &idea)
{
	if (index < 100)
	{
		ideas[index] = idea;
	}
}

std::string Brain::getIdea(unsigned int index) const
{
	if (index < 100)
	{
		return ideas[index];
	}
	return "";
}