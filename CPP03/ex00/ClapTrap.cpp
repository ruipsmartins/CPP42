#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->_name = "Default";
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->_name = name;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
}


ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called." << std::endl;
}

bool checkPoints(int hit_points, int energy_points, std::string name)
{
	if (hit_points <= 0)
	{
		std::cout << "ClapTrap " << name << " has no hit points left." << std::endl;
		return false;
	}
	if (energy_points <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points left." << std::endl;
		return false;
	}
	return true;
}

void ClapTrap::attack(const std::string &target)
{
	if (checkPoints(this->_hit_points, this->_energy_points, this->_name) == false)
		return;
	
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead and cannot take more damage." << std::endl;
		return;
	}
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! Hit points left: " << this->_hit_points << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (checkPoints(this->_hit_points, this->_energy_points, this->_name) == false)
		return;
	this->_hit_points += amount;
	this->_energy_points--;
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " hit points! Hit points now: " << this->_hit_points << std::endl;
}
