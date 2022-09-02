#include  "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "New default FragTrap " << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "New FragTrap " << name << std::endl;
    this->name = name;
    this->energy = 50;
    this->hit_points = 100;
    this->attack_damage = 20;
}

FragTrap::~FragTrap()
{
    std::cout << "Destroy FragTrap " << name << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->energy > 0 && this->hit_points > 0)
    {
        --energy;
        std::cout << "ClapTrap " << name << " attacks " << target << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " no energy or hp to atack" << std::endl;

}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "Copy Builder " << other.name << std::endl;
    *this = other;
}


FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "Assignment " << other.name << std::endl;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy = other.hit_points;
    this->attack_damage = other.attack_damage;
    return *this;
}

void FragTrap::highFivesGuys()
{
        std::cout << name << ": High-five me" << std::endl;
}
