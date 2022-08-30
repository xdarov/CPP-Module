#include "HumanB.hpp"

HumanB::HumanB(const char *name)
{
    this->name = std::string(name);
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    std::cout << name
              << " attacks with their "
              << (*weapon).getType()
              << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}