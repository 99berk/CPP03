#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    FragTrap Frag1("Tyson");
    FragTrap Frag2("Paul");

    std::cout << std::endl;
    
    FragTrap *Frag4 = new FragTrap("Venus");
    Frag4->attack("Mars");
    Frag4->takeDamage(4);
    Frag4->highFivesGuys();
    delete Frag4;

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
    
    Frag1.highFivesGuys();
    
    std::cout << std::endl;

    ScavTrap Scav1("Khabib");
    Scav1.beRepaired(0);
    Scav1.guardGate();
    
    std::cout << std::endl;

    ClapTrap Clap1("McGregor");
    Clap1.attack("Khabib");

    std::cout << std::endl;

    return 0;
}
