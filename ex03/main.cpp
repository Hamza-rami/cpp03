#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dia("DI4M-TP");

    dia.attack("Enemy");
    dia.whoAmI();

    return 0;
}
