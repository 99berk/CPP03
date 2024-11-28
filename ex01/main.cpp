#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    ScavTrap Scav1("Tyson");
    ScavTrap Scav2("Paul");

    std::cout << std::endl;
    
    ScavTrap *Scav4 = new ScavTrap("Venus");
    Scav4->attack("Mars");
    Scav4->takeDamage(4);
    Scav4->guardGate();
    delete Scav4;

    std::cout << std::endl;

    Scav1.attack("Paul");
    Scav2.takeDamage(20);

    std::cout << std::endl;

    Scav2.attack("Tyson");
    Scav1.takeDamage(20);

    std::cout << std::endl;
    
    Scav2.takeDamage(4);
    Scav1.takeDamage(3);

    std::cout << std::endl;
    
    Scav2.beRepaired(10);
    Scav1.beRepaired(7);

    std::cout << std::endl;
    
    Scav2.takeDamage(100);
    Scav2.beRepaired(50);

    std::cout << std::endl;

    Scav1.guardGate();

    std::cout << std::endl;
    
    ScavTrap Scav3;
    int i = -1;
    while (++i < 52)
        Scav3.attack("Someone");
    
    std::cout << std::endl;

    ClapTrap Clap1("McGregor");
    Clap1.attack("SomeOne");

    std::cout << std::endl;

    return 0;
}