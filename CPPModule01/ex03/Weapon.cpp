#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(const char *type)
{
    this->type = std::string(type);
}

Weapon::~Weapon(){}

std::string Weapon::getType()
{
    return type;
}

void Weapon::setType(const char *type)
{
    this->type = std::string(type);
}