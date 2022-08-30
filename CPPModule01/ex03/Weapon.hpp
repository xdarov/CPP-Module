#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
    std::string type;

    public:
    Weapon();
    Weapon(const char *type);
    ~Weapon();
    
    std::string getType();
    void setType(const char *type);

};

#endif