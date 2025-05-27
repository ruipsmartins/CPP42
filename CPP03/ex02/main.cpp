#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n--- Creating FragTrap frag1 ---\n";
    FragTrap frag1("frag1");

    std::cout << "\n--- Testing attacks and repairs ---\n";
    frag1.attack("target1");
    frag1.takeDamage(30);
    frag1.beRepaired(20);
    frag1.attack("target2");

    std::cout << "\n--- Testing special method highFivesGuys() ---\n";
    frag1.highFivesGuys();

    std::cout << "\n--- Testing copy constructor ---\n";
    FragTrap frag2(frag1);
    frag2.attack("target3");

    std::cout << "\n--- Testing assignment operator ---\n";
    FragTrap frag3;
    frag3 = frag1;
    frag3.attack("target4");

    std::cout << "\n--- Reducing energy to zero ---\n";
    for (int i = 0; i < 100; ++i)
        frag1.attack("dummy");

    std::cout << "\n--- Testing actions with no energy ---\n";
    frag1.attack("noEnergyTarget");
    frag1.beRepaired(10);
    frag1.highFivesGuys();

    std::cout << "\n--- End of program ---\n";
    return 0;
}