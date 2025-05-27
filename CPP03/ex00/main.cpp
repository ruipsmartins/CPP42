#include <iostream>
#include <string>
#include "ClapTrap.hpp"


int main()
{
	std::cout << "\n--- Creating ClapTrap ct1 ---\n";
    ClapTrap ct1("CT-One");

    std::cout << "\n--- Testing attack, takeDamage, beRepaired ---\n";
    ct1.attack("Target-A");
    ct1.takeDamage(5);
    ct1.beRepaired(3);
    ct1.attack("Target-B");

    std::cout << "\n--- Testing copy constructor ---\n";
    ClapTrap ct2(ct1);
    ct2.attack("Target-C");

    std::cout << "\n--- Testing assignment operator ---\n";
    ClapTrap ct3;
    ct3 = ct1;
    ct3.attack("Target-D");

    std::cout << "\n--- Reducing energy to zero ---\n";
    for (int i = 0; i < 10; ++i) {
        ct1.attack("Dummy");
    }

    std::cout << "\n--- Testing actions with no energy ---\n";
    ct1.attack("NoEnergyTarget");
    ct1.beRepaired(5);

    std::cout << "\n--- Reducing HP to zero ---\n";
    ct1.takeDamage(50);
    ct1.takeDamage(50);

    std::cout << "\n--- Testing actions with 0 HP ---\n";
    ct1.attack("DeadTarget");
    ct1.beRepaired(5);

    std::cout << "\n--- End of main ---\n";
    return 0;
}

bool checkPoints(int hit_points, int energy_points, std::string name);
