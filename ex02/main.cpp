#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    FragTrap Frag1("Tyson");
    FragTrap Frag2("Paul");

    std::cout << std::endl;

    Frag1.attack("Paul");
    Frag2.takeDamage(30);

    std::cout << std::endl;

    Frag2.attack("Tyson");
    Frag1.takeDamage(30);

    std::cout << std::endl;
    
    Frag2.takeDamage(4);
    Frag1.takeDamage(3);

    std::cout << std::endl;
    
    Frag2.beRepaired(1);
    Frag1.beRepaired(2);

    std::cout << std::endl;
    
    Frag2.takeDamage(100);
    Frag2.beRepaired(50);

    std::cout << std::endl;
    
    FragTrap Frag3;
    int i = -1;
    while (++i < 4)
        Frag3.attack("Someone");
    
    std::cout << std::endl;
}