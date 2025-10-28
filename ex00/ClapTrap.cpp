#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n): name(n), Hit(10), Energy(10), Damage(0)
{
    std::cout << "ClapTrap " << name << " has been created with Parameterized constructor" << std::endl;
}

ClapTrap::ClapTrap(): name("Unnamed"), Hit(10), Energy(10), Damage(0)
{
    std::cout << "ClapTrap " << name << " has been created with Default constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    name = other.name;
    Hit = other.Hit;
    Energy = other.Energy;
    Damage = other.Damage;
    std::cout << "ClapTrap " << name << " has been copied!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        name = other.name;
        Hit = other.Hit;
        Energy = other.Energy;
        Damage = other.Damage;
    }
    std::cout << "ClapTrap " << name << " has been assigned new values!" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (Hit == 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack — it's destroyed!" << std::endl;
        return;
    }
    if (Energy == 0)
    {
        std::cout << "⚡ ClapTrap " << name << " has no energy left to attack!" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << Damage << " points of damage!" << std::endl;
    Energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit == 0)
    {
        std::cout << "ClapTrap " << name << " is already destroyed and can't take more damage!" << std::endl;
        return;
    }

    if (Hit - amount <= 0)
    {
        Hit = 0;
        std::cout << "ClapTrap " << name << " takes " << amount
                  << " points of damage and is destroyed!" << std::endl;
    }
    else
    {
        Hit -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount
                  << " points of damage! Remaining HP: " << Hit << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit == 0)
    {
        std::cout << "ClapTrap " << name << " cannot repair — it's destroyed!" << std::endl;
        return;
    }
    if (Energy == 0)
    {
        std::cout << "ClapTrap " << name << " has no energy left to repair!" << std::endl;
        return;
    }

    Hit += amount;
    Energy--;
    std::cout << "ClapTrap " << name << " repairs itself, gaining " << amount
              << " hit points! (HP: " << Hit << ", Energy: " << Energy << ")" << std::endl;
}
