#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    Hit = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "ScavTrap " << name << " has been created with Parameterized constructor" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
    Hit = 100;
    Energy = 50;
    Damage = 20;
    std::cout << "ScavTrap " << name << " has been created with Default constructor" << std::endl;
} 

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << other.name << " has been copied!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << name << " has been assigned values from another instance!" << std::endl;
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " has been destroyed!" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Hit == 0)
    {
        std::cout << "ScavTrap " << name << " cannot attack — it's destroyed!" << std::endl;
        return;
    }
    if (Energy == 0)
    {
        std::cout << "ScavTrap " << name << " has no energy left to attack!" << std::endl;
        return;
    }

    std::cout << "ScavTrap " << name << " attacks " << target
              << ", causing " << Damage << " points of damage!" << std::endl;
    Energy--;
}