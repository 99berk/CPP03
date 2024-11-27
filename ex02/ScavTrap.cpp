#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
    this->_name = "NameLess";
    this->_attack_damage = 20;
    this->_energy_points = 50;
    this->_hit_points = 100;
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_attack_damage = 20;
    this->_energy_points = 50;
    this->_hit_points = 100;
    std::cout << this->_name << " ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy Constructor Called" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy Assigment Operator Called" << std::endl;
    if(this != &other)
    {
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hit_points <=0)
    {
        std::cout << "ScavTrap " << this->_name << " is already dead! Can't attack." << std::endl;
        return;
    }
    if(this->_energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " no energy left! Can't attack." << std::endl;
        return;
    }
    std::cout  << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    --this->_energy_points;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <=0)
    {
        std::cout << "ScavTrap " << this->_name << " is already dead! Can't be more dead" << std::endl;
        return;
    }
    if(amount >= this->_hit_points)
    {
        this->_hit_points = 0;
        std::cout << "ScavTrap " << this->_name << " no hit point left. Its dead!" << std::endl;
    }
    else
    {
        this->_hit_points -= amount;
        std::cout << "ScavTrap " << this->_name << " taken " << amount << " damage. " << this->_hit_points << " hit points left!" << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points <=0)
    {
        std::cout << "ScavTrap " << this->_name << " is already dead! Can't heal." << std::endl;
        return;
    }
    if(this->_energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " no energy left! Can't heal." << std::endl;
        return;
    }
    this->_hit_points += amount;
    std::cout << "ScavTrap " << this->_name << " repaired of " << amount << " HP. New hit points is " << this->_hit_points << "." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
