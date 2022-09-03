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

void Dog::set_ideas(std::string idea) const
{
    std::cout << type << " : ";
    this->brain->set_ideas(idea);
}

void Dog::show_idea() const
{
    std::string *ideas = this->brain->get_ideas();
    int i = -1;

    std::cout << type << " ideas: ";
    while (++i < 100 && ideas[i].length() > 0)
        std::cout << ideas[i] << " ";
    if (i == 0)
        std::cout << "No ideas";
    std::cout << std::endl;
}