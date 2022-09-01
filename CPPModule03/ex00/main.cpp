#include "ClapTrap.hpp"

int main ()
{
    ClapTrap green("green");
    ClapTrap black("black");
    ClapTrap yelow("yelow");

    green.attack(black.get_name());
    black.takeDamage(0);
    
    black.attack(yelow.get_name());
    yelow.takeDamage(0);

    black.beRepaired(0);
    yelow.beRepaired(0);

    return 0;
}