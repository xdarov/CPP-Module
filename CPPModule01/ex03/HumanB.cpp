#include "HumanB.hpp"

HumanB::HumanB(const char *name)
{
    this->name = std::string(name);
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    if (weapon == NULL)
        return;
    std::cout << name
              << " attacks with their "
              << weapon->getType()
              << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}