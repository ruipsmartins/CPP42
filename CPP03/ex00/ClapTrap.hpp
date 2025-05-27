#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;

public:
    ClapTrap(); // default constructor
    ClapTrap(std::string name); // constructor
    ClapTrap(const ClapTrap &other); // copy constructor
    ClapTrap &operator=(const ClapTrap &other); // copy assignment operator
    ~ClapTrap(); // destructor

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif 