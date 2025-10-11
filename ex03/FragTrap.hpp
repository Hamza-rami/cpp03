#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>


class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(std::string n);
    ~FragTrap();
    void highFivesGuys(void);

};

#endif

