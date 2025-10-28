#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(std::string n);
    ~ScavTrap();
    void attack(const std::string& target); 
    void guardGate();
};

#endif
