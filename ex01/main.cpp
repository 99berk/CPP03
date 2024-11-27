#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    ScavTrap Scav1("Tyson");
    ScavTrap Scav2("Paul");

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
    
    Scav2.beRepaired(1);
    Scav1.beRepaired(2);

    std::cout << std::endl;
    
    Scav2.takeDamage(100);
    Scav2.beRepaired(50);

    std::cout << std::endl;
    
    ScavTrap Scav3;
    int i = -1;
    while (++i < 4)
        Scav3.attack("Someone");
    
    std::cout << std::endl;
}