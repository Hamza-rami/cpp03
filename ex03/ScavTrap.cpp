#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    Hit = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "ScavTrap " << n <<" created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Hit == 0 || Energy == 0)
    {
        std::cout << "ScavTrap " << name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Damage << " points of damage!" << std::endl;
    Energy--;
}