#include "ScavTrap.hpp"

int main ()
{
    ScavTrap black("black");

    ScavTrap green("green");

    black.guardGate();
    green.guardGate();

    return 0;
}