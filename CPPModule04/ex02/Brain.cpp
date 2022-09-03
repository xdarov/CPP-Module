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

void Brain::set_ideas(std::string new_idea)
{
    int i = -1;

    while (++i < 100)
        if (ideas[i].length() == 0)
        {
            std::cout << "New idea!" << std::endl;
            ideas[i] = new_idea;
            break ;
        }
    if (i == 100)
        std::cout << "Brain is full" << std::endl;
}

std::string *Brain::get_ideas()
{
    return ideas;
}