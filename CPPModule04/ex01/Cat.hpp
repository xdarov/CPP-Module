#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp" 

class Cat : public Animal
{
    private:
    Brain *brain;

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