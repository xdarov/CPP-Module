#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "New default ClapTrap " << std::endl;

}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "New ClapTrap " << name << std::endl;
    this->name = name;
    energy = 10;
    hit_points = 10;
    attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destroy ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy Builder " << other.name << std::endl;
    *this = other;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Assignment " << other.name << std::endl;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy = other.hit_points;
    this->attack_damage = other.attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy > 0 && this->hit_points > 0)
    {
        --energy;
        std::cout << "ClapTrap " << name << " attacks " << target << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " no energy or hp to atack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points > 0)
    {
        hit_points -= amount;
        std::cout << "ClapTrap " << name << " take " << amount << " damage" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " no hp" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy > 0 && hit_points > 0)
    {
        --energy;
        hit_points += amount;
        std::cout << "ClapTrap " << name << " repaired " << amount << " health" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " no energy or hp to repaired" << std::endl;
}

std::string ClapTrap::get_name()
{
    return name;
}