#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Create Cat" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Destoy Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Assignment Cat" << std::endl;
    this->type = other.type;
    return *this;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Copy Cat" << std::endl;
    *this = other;
}

void Cat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}