#include "ScavTrap.hpp"


int main()
{
    ScavTrap scav("Hamza");
    scav.attack("Enemy");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "--------------------" << std::endl;

    for (int i = 0; i < 51; i++)
        scav.attack("Enemy");
    scav.takeDamage(200);
    scav.beRepaired(10);

    return 0;
}
