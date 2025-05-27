#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n--- Criar FragTrap frag1 ---\n";
    FragTrap frag1("frag1");

    std::cout << "\n--- Testar ataques e reparações ---\n";
    frag1.attack("target1");
    frag1.takeDamage(30);
    frag1.beRepaired(20);
    frag1.attack("target2");

    std::cout << "\n--- Testar método especial highFivesGuys() ---\n";
    frag1.highFivesGuys();

    std::cout << "\n--- Testar cópia por construtor ---\n";
    FragTrap frag2(frag1);
    frag2.attack("target3");

    std::cout << "\n--- Testar atribuição por operador ---\n";
    FragTrap frag3;
    frag3 = frag1;
    frag3.attack("target4");

    std::cout << "\n--- Reduzir energia até zero ---\n";
    for (int i = 0; i < 101; ++i)
        frag1.attack("dummy");

    std::cout << "\n--- Testar ações sem energia ---\n";
    frag1.attack("noEnergyTarget");
    frag1.beRepaired(10);
    frag1.highFivesGuys();

    std::cout << "\n--- Fim do programa ---\n";
    return 0;
}