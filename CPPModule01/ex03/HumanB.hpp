#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
    std::string name;
    Weapon *weapon;

    public:
    HumanB(const char *name);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif