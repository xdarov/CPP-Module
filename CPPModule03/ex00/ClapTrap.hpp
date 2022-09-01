#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    std::string name;
    int hit_points;
    int energy;
    int attack_damage;

    public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &other);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string  get_name();
};





#endif