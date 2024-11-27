#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
    this->_name = "NameLess";
    this->_attack_damage = 0;
    this->_energy_points = 10;
    this->_hit_points = 10;
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_attack_damage = 0;
    this->_energy_points = 10;
    this->_hit_points = 10;
    std::cout << this->_name << " ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap Copy Constructor Called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap Copy Assigment Operator Called" << std::endl;
    if(this != &other)
    {
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hit_points <=0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead! Can't attack." << std::endl;
        return;
    }
    if(this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " no energy left! Can't attack." << std::endl;
        return;
    }
    std::cout  << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    --this->_energy_points;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <=0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead! Can't be more dead" << std::endl;
        return;
    }
    if(amount >= this->_hit_points)
    {
        this->_hit_points = 0;
        std::cout << "ClapTrap " << this->_name << " no hit point left. Its dead!" << std::endl;
    }
    else
    {
        this->_hit_points -= amount;
        std::cout << "ClapTrap " << this->_name << " taken " << amount << " damage. " << this->_hit_points << " hit points left!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points <=0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead! Can't heal." << std::endl;
        return;
    }
    if(this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " no energy left! Can't heal." << std::endl;
        return;
    }
    this->_hit_points += amount;
    std::cout << "ClapTrap " << this->_name << " repaired of " << amount << " HP. New hit points is " << this->_hit_points << "." << std::endl;
}
