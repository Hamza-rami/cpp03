#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Hamza");

    clap.attack("Rami");
    clap.takeDamage(3);
    clap.takeDamage(3);
    clap.beRepaired(5);
    return 0;
}
