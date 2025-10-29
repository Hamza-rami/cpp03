#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    FragTrap frag("hamza");
    frag.attack("Enemy");
    frag.takeDamage(100);
    frag.beRepaired(10);
    frag.highFivesGuys();

    return 0;
}
