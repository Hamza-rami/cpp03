#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    Hit = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "ScavTrap " << " created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << " destroyed!" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << " is now in Gate keeper mode." << std::endl;
}
