#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
		ScavTrap(); // default constructor
		ScavTrap(std::string name); // constructor
		ScavTrap(const ScavTrap &other); // copy constructor
		ScavTrap &operator=(const ScavTrap &other); // copy assignment operator
		~ScavTrap(); // destructor

		void attack(const std::string& target);
		void guardGate();

	


};






#endif