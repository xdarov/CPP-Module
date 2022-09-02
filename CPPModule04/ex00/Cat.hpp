#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    protected:
    using Animal::type;

    public:
    Cat();
    ~Cat();
    Cat &operator=(const Cat &other);
    Cat(const Cat &other);
    void makeSound() const;
    using Animal::getType;
};

#endif