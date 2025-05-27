//fazer isto

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = "Default FragTrap";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	/*
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;*/
}


FragTrap::~FragTrap()
{
	std::cout << "Fragtrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "Fragtrap copy assignment operator called" << std::endl;
	if (this!=&other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}


void FragTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "Fragtrap " << this->_name << " attacks " << target
					<< ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else if (this->_hit_points <= 0)
	{
		std::cout << "Fragtrap " << this->_name << " is out of hit points and cannot attack!" << std::endl;
	}
	else
	{
		std::cout << "Fragtrap " << this->_name << " is out of energy and cannot attack!" << std::endl;
	}

}

void FragTrap::highFivesGuys(void)
{
	if (this->_hit_points > 0)
	{
		std::cout << "FragTrap " << this->_name << " requests a high five!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->_name << " is out of hit points and cannot request a high five!" << std::endl;
	}
}