#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
	//this->_name = "Default ScavTrap";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	//this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}