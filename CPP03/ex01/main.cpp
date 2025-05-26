#include <iostream>
#include <string>
#include "ClapTrap.hpp"


int main()
{
	{
		ClapTrap claptrap("Sulash");
		claptrap.attack("Enemy");
		claptrap.takeDamage(5);
		claptrap.beRepaired(3);
		claptrap.beRepaired(2);
		claptrap.beRepaired(2);
		claptrap.beRepaired(2);
		claptrap.takeDamage(5);
		claptrap.attack("Enemy");
		claptrap.attack("Enemy");
		claptrap.attack("Enemy");
		claptrap.attack("Enemy");
		claptrap.attack("Enemy");
		claptrap.attack("Enemy");
		claptrap.beRepaired(2);
		claptrap.beRepaired(2);
	}

	{
		ClapTrap claptrap2("Bob");
		claptrap2.attack("Enemy");
		claptrap2.takeDamage(5);
		claptrap2.beRepaired(3);
		claptrap2.beRepaired(2);
		claptrap2.beRepaired(2);
		claptrap2.beRepaired(2);
		claptrap2.takeDamage(5);
		claptrap2.takeDamage(5);
		claptrap2.takeDamage(5);
		claptrap2.takeDamage(5);
		claptrap2.attack("Enemy");
		claptrap2.beRepaired(2);
	}
    return 0;
}

bool checkPoints(int hit_points, int energy_points, std::string name);
