#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
 	std::cout << "\n--- Creating ScavTrap scav1 ---\n";
    ScavTrap scav1("scav1");

    std::cout << "\n--- Testing attacks and repairs ---\n";
    scav1.attack("target1");
    scav1.takeDamage(50);
    scav1.beRepaired(30);
    scav1.attack("target2");

    /*std::cout << "\n--- Taking heavy damage ---\n";
    scav1.takeDamage(70);
    scav1.takeDamage(70);
	
    std::cout << "\n--- Trying to repair and attack with 0 hit points ---\n";
    scav1.beRepaired(3);
    scav1.attack("target2");*/

    std::cout << "\n--- Testing guardGate() ---\n";
    scav1.guardGate();


    std::cout << "\n--- Testing copy constructor ---\n";
    ScavTrap scav2(scav1);
    scav2.attack("target3");

    std::cout << "\n--- Reducing energy to zero ---\n";
    for (int i = 0; i < 50; ++i)
        scav1.attack("dummy");

    std::cout << "\n--- Testing assignment operator ---\n";
    ScavTrap scav3;
    scav3 = scav2;
    scav3.attack("target4");


    std::cout << "\n--- Testing actions with no energy ---\n";
    scav1.attack("noEnergyTarget");
    scav1.beRepaired(10);
    scav1.guardGate();

    std::cout << "\n--- End of program ---\n";

	
	
    return 0;
}

