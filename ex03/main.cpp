#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dt1("Hamza");
    DiamondTrap dt2(dt1);      // ← Copy Constructor
    DiamondTrap dt3;
    dt3 = dt1;                 // ← Copy Assignment Operator
}

