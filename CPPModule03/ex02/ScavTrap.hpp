#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    std::string name;
    int hit_points;
    int energy;
    int attack_damage;

    public:
    ScavTrap();
    ScavTrap(std::string);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &other);
    ScavTrap(const ScavTrap &other);
    void guardGate();
    void attack(const std::string &target);
    void test();
};

#endif