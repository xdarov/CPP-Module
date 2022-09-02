#include "Zombie.hpp"

int main()
{
    int count = 50;
    int i = -1;


    Zombie *zombie_Jon = new Zombie(std::string("Jon"));

    Zombie *horde = zombieHorde(-1 ,std::string("plague_zombie_"));

    while (++i < count)
        horde[i].announce();

    delete zombie_Jon;
    delete[] horde;
    return 0;
}