#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	//ScavTrap exercise

	ScavTrap scav1("scav1");
	scav1.attack("target1");
	scav1.takeDamage(5);
	scav1.beRepaired(3);
	scav1.attack("target2");
	scav1.takeDamage(70);
	scav1.takeDamage(70);
	scav1.guardGate();
	scav1.beRepaired(3);
	scav1.attack("target2");
	
	
	
    return 0;
}

