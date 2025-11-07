#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
    Hit = 100;
    Energy = 100;
    Damage = 20;
    std::cout << "FragTrap " << name << " has been created with Parameterized constructor" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
    Hit = 100;
    Energy = 100;
    Damage = 20;
    std::cout << "FragTrap " << name << " has been created with Default constructor" << std::endl;
} 

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap " << other.name << " has been copied!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap " << name << " has been assigned values from another instance!" << std::endl;
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " has been destroyed!" << std::endl;
}


void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (Hit == 0)
    {
        std::cout << "FragTrap " << name << " cannot attack — it's destroyed!" << std::endl;
        return;
    }
    if (Energy == 0)
    {
        std::cout << "FragTrap " << name << " has no energy left to attack!" << std::endl;
        return;
    }

    std::cout << "FragTrap " << name << " attacks " << target
              << ", causing " << Damage << " points of damage!" << std::endl;
    Energy--;
}