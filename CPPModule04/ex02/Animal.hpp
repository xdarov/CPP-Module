#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
    std::string type;

    public:
    Animal();
    virtual ~Animal();
    Animal &operator=(const Animal &other);
    Animal(const Animal &other);
    std::string getType() const;
    virtual void makeSound() const = 0;

    virtual void set_ideas(std::string idea) const = 0;
    virtual void show_idea() const = 0;
};

#endif