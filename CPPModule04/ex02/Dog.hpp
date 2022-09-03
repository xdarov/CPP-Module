#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
    Brain *brain;

    protected:
    using Animal::type;

    public:
    Dog();
    ~Dog();
    Dog &operator=(const Dog &other);
    Dog(const Dog &other);
    void makeSound() const;
    using Animal::getType;

    void set_ideas(std::string idea) const;
    void show_idea() const;
};

#endif