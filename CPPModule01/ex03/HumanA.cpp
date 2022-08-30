#include "HumanA.hpp"

HumanA::HumanA(const char *name, Weapon &weapon)
{
    this->weapon = &weapon;
    this->name = std::string(name);
}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << name
              << " attacks with their "
              << (*weapon).getType()
              << std::endl;
}