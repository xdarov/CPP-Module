#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    private:
    std::string ideas[100];
    
    
    public:
    Brain();
    ~Brain();
    Brain &operator=(const Brain &other);
    Brain(const Brain &other);
    void set_ideas(std::string new_idea);
    std::string *get_ideas();

};

#endif