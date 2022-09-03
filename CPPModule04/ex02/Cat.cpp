#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Create Cat" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::~Cat()
{
    delete brain;
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

void Cat::set_ideas(std::string idea) const
{
    std::cout << type << " : ";
    this->brain->set_ideas(idea);
}

void Cat::show_idea() const
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