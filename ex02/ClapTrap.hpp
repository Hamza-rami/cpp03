#ifndef CLAPTRAD_HPP
#define CLAPTRAD_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int Hit;
    int Energy;
    int Damage;

public:
    ClapTrap();
    ClapTrap(std::string n);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};





#endif