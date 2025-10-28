#include "FragTrap.hpp"

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
    this->Hit = 100;
    this->Energy = 100;
    this->Damage = 30;
    std::cout << "FragTrap " << n << " created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (Hit == 0 || Energy == 0)
    {
        std::cout << "FragTrap " << name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << Damage << " points of damage!" << std::endl;
    Energy--;
}