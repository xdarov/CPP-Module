#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    protected:
    using Animal::type;

    public:
    Dog();
    ~Dog();
    Dog &operator=(const Dog &other);
    Dog(const Dog &other);
    void makeSound() const;
    using Animal::getType;
};



#endif