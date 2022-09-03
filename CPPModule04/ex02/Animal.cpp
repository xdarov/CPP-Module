#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Create Animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destoy Animal" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Assignment Animal" << std::endl;
    this->type = other.type;
    return *this;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Copy Animal" << std::endl;
    *this = other;
}

std::string Animal::getType() const
{
    return type;
}
