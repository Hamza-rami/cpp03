#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string n)
{
    name = n;
    Energy = 10;
    Hit = 10;
    Damage = 0;
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit == 0 || Energy == 0)
    {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Damage << " points of damage!" << std::endl;
    Energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    Hit -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    if (Hit < 0)
    {
        Hit = 0;
        std::cout << "ClapTrap " << name << " is destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit == 0 || Energy == 0)
    {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to repair!" << std::endl;
        return;
    }
    Hit += amount;
    Energy--;

    std::cout << "ClapTrap " << name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
}
