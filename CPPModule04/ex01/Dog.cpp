#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Create Dog" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Destoy Dog" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Assignment Dog" << std::endl;
    this->type = other.type;
    return *this;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Copy Dog" << std::endl;
    *this = other;
}

void Dog::makeSound() const
{
    std::cout << "GAV GAV" << std::endl;
}