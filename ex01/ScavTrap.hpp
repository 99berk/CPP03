#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& other);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void guardGate();
};

#endif