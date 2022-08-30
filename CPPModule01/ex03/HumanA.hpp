#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
    std::string name;
    Weapon *weapon;

    public:
    HumanA(const char *name, Weapon &weapon);
    ~HumanA();
    void attack();
};

#endif