#include "Cat.hpp"
#include "Dog.hpp"

int main ()
{
    const Animal *animals[6];
    int i = -1;

    while (++i < 3)
        animals[i] = new Dog();
    while (i < 6)
        animals[i++] = new Cat();
    
    std::cout << "---------------------" << std::endl;
    animals[5]->set_ideas("'bite the dog'");
    animals[5]->set_ideas("'purr'");
    animals[5]->set_ideas("'go eat'");
    animals[5]->show_idea();

    animals[0]->set_ideas("'barking'");
    animals[0]->set_ideas("'eat cat'");
    animals[0]->set_ideas("'sleep'");
    animals[0]->show_idea();
    std::cout << "---------------------" << std::endl;

    i = -1;
    while(++i < 6)
        delete animals[i];

    return 0;
}    
