#include "Cat.hpp"
#include "Dog.hpp"

// int main ()
// {
//     Dog dog;
//     std::cout << dog.getType() << std::endl;
//     dog.makeSound();

//     Cat cat;
//     std::cout << cat.getType() << std::endl;
//     cat.makeSound();

//     return 0;
// }

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    return 0;
}    
