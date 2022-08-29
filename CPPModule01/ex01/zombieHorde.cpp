#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    int i = -1;

    Zombie *zombies = new Zombie[N];
    while (++i < N)
        zombies[i].get_name(name + std::to_string(i+1));
    return zombies;
    
}