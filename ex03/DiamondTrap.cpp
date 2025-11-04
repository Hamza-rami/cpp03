#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name") , ScavTrap(n), FragTrap(n)
{
    name = n;
    Hit =  FragTrap::Hit;
    Energy = ScavTrap::Energy;
    Damage = FragTrap::Damage;
    std::cout << "DiamondTrap " << name << " has been created with Parameterized constructor" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap("Unnamed_clap_name")
{
    name = "Unnamed";
    Hit =  FragTrap::Hit;
    Energy = ScavTrap::Energy;
    Damage = FragTrap::Damage;
    std::cout << "DiamondTrap " << name << " has been created with Default constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " has been destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    *this = other;
    std::cout << "DiamondTrap " << name << " has been copied!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        name = other.name;
    }
    std::cout << "DiamondTrap " << name << " assigned!" << std::endl;
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap named " << name
              << ", and my ClapTrap name is " << ClapTrap::name << std::endl;
}