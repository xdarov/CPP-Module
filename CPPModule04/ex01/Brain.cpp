#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Create Brain" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destoy Brain" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Assignment Brain" << std::endl;
    *this->ideas = *other.ideas;
    return *this;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Copy Brain" << std::endl;
    *this = other;
}