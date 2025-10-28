#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"), ScavTrap(n), FragTrap(n)
{
    this->name = n;
    this->Hit = FragTrap::Hit;
    this->Energy = ScavTrap::Energy;
    this->Damage = FragTrap::Damage;
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string &target) 
{
    ScavTrap::attack(target);
}