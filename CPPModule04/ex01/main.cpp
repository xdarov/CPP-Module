#include "Cat.hpp"
#include "Dog.hpp"

int main ()
{
    Animal *animals[6];
    int i = -1;

    while (++i < 3)
        animals[i] = new Dog();
    while (i < 6)
        animals[i++] = new Cat();
    
    std::cout << "---------------------" << std::endl;
    

    std::cout << "---------------------" << std::endl;

    i = -1;
    while(++i < 6)
    {
        delete animals[i];
    }

    return 0;
}    
