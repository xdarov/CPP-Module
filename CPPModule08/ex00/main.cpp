#include "easyfind.hpp"


int main ()
{
    std::vector<int> some_vector = {0, 10, 20, 30, 40 ,50 , 60, 70 , 80, 90};
    std::set<int> some_set = {0, 10, 20, 30, 40 ,50 , 60, 70 , 80, 90};
    std::list<int> some_list = {0, 10, 20, 30, 40 ,50 , 60, 70 , 80, 90};

    try
    {
        std::cout << easyfind(some_vector, 5) << std::endl;
    }
    catch(std::runtime_error &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    try
    {
        std::cout << easyfind(some_set, 5) << std::endl;
    }
    catch(std::runtime_error &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try
    {
        std::cout << easyfind(some_list, 5) << std::endl;
    }
    catch(std::runtime_error &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << easyfind(some_vector, 0) << std::endl;
    std::cout << easyfind(some_set, 30) << std::endl;
    std::cout << easyfind(some_list, 90) << std::endl;

    return 0;
}