#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    FragTrap fr;
    fr.attack("Enemy");
    fr.takeDamage(100);
    fr.beRepaired(10);
    // fr.highFivesGuys();

    return 0;
}
