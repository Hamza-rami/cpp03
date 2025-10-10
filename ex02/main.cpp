#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "--- ClapTrap test ---" << std::endl;
    ClapTrap clap("CL4P-TP");
    clap.attack("Target A");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n--- ScavTrap test ---" << std::endl;
    ScavTrap scav("SC4V-TP");
    scav.attack("Target B");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "\n--- FragTrap test ---" << std::endl;
    FragTrap frag("FR4G-TP");
    frag.attack("Target C");
    frag.takeDamage(30);
    frag.beRepaired(15);
    frag.highFivesGuys();

    std::cout << "\n--- Destruction phase ---" << std::endl;
    return 0;
}
