#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
    this->_name = "NameLess";
    this->_attack_damage = 30;
    this->_energy_points = 100;
    this->_hit_points = 100;
    std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_attack_damage = 30;
    this->_energy_points = 100;
    this->_hit_points = 100;
    std::cout << this->_name << " FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Copy Assigment Operator Called" << std::endl;
    if(this != &other)
    {
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->_hit_points <=0)
    {
        std::cout << "FragTrap " << this->_name << " is already dead! Can't attack." << std::endl;
        return;
    }
    if(this->_energy_points <= 0)
    {
        std::cout << "FragTrap " << this->_name << " no energy left! Can't attack." << std::endl;
        return;
    }
    std::cout  << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    --this->_energy_points;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <=0)
    {
        std::cout << "FragTrap " << this->_name << " is already dead! Can't be more dead" << std::endl;
        return;
    }
    if(amount >= this->_hit_points)
    {
        this->_hit_points = 0;
        std::cout << "FragTrap " << this->_name << " no hit point left. Its dead!" << std::endl;
    }
    else
    {
        this->_hit_points -= amount;
        std::cout << "FragTrap " << this->_name << " taken " << amount << " damage. " << this->_hit_points << " hit points left!" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points <=0)
    {
        std::cout << "FragTrap " << this->_name << " is already dead! Can't heal." << std::endl;
        return;
    }
    if(this->_energy_points <= 0)
    {
        std::cout << "FragTrap " << this->_name << " no energy left! Can't heal." << std::endl;
        return;
    }
    this->_hit_points += amount;
    std::cout << "FragTrap " << this->_name << " repaired of " << amount << " HP. New hit points is " << this->_hit_points << "." << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap is requesting a high five." << std::endl;
}
