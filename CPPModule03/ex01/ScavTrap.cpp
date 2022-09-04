#include  "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "New default ScavTrap " << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name, 50, 100, 20)
{
    std::cout << "New ScavTrap " << name << std::endl;
    this->name = name;
    this->energy = 50;
    this->hit_points = 100;
    this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destroy ScavTrap " << name << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << name << " : I'm in Gatekeeper Mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy > 0 && this->hit_points > 0)
    {
        --energy;
        std::cout << "ClapTrap " << name << " attacks " << target << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " no energy or hp to atack" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "Copy Builder " << other.name << std::endl;
    *this = other;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "Assignment " << other.name << std::endl;
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy = other.hit_points;
    this->attack_damage = other.attack_damage;
    return *this;
}
