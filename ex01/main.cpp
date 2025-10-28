#include "ScavTrap.hpp"


int main()
{
    ScavTrap sc;
    ScavTrap scav(sc);
    scav.attack("Enemy");
    scav.takeDamage(100);
    scav.beRepaired(10);
    scav.guardGate();

    return 0;
}
