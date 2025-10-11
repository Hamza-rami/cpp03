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
    ClapTrap(std::string n);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif  