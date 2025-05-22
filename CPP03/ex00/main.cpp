#include <iostream>
#include <string>
#include "ClapTrap.hpp"


int main()
{
    ClapTrap claptrap("Claptrap");
    claptrap.attack("Enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(2);
    return 0;
}