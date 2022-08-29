#include "Zombie.hpp"

int main()
{
    Zombie *zombie_Jon = new Zombie(std::string("Jon"));
    zombie_Jon->announce();

    randomChump(std::string("randomChamp"));

    Zombie *zombie_Misha = newZombie(std::string("Misha"));
    zombie_Misha->announce();

    delete zombie_Misha;
    delete zombie_Jon;

    return 0;
}