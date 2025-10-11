#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    Hit = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "ScavTrap "<< n << " created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << " is now in Gate keeper mode." << std::endl;
}
