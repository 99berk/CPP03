#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    ClapTrap Clap1("Tyson");
    ClapTrap Clap2("Paul");

    std::cout << std::endl;

    Clap1.attack("Paul");
    Clap2.takeDamage(0);

    std::cout << std::endl;

    Clap2.attack("Tyson");
    Clap1.takeDamage(0);

    std::cout << std::endl;
    
    Clap2.takeDamage(4);
    Clap1.takeDamage(3);

    std::cout << std::endl;
    
    Clap2.beRepaired(1);
    Clap1.beRepaired(2);

    std::cout << std::endl;
    
    Clap2.takeDamage(10);
    Clap2.beRepaired(5);

    std::cout << std::endl;
    
    ClapTrap Clap3;
    int i = -1;
    while (++i < 11)
        Clap3.attack("Someone");
    
    std::cout << std::endl;

    return 0;
}