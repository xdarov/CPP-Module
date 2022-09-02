#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
    std::string name;
    int hit_points;
    int energy;
    int attack_damage;

    public:
    FragTrap();
    FragTrap(std::string);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &other);
    FragTrap(const FragTrap &other);
    void guardGate();
    void attack(const std::string &target);
    void highFivesGuys(void);
};

#endif