#include "phonebook.hpp"

int main()
{
    PhoneBook phonebook;
    char commands[1025];
    while (true)
    {
        strcpy(commands, PhoneBook().get_input((char *)"Enter the command"));
        if (strncmp(commands, "ADD", 4) == 0)
            phonebook.get_new_contact();
        else if (strncmp(commands, "SEARCH", 7) == 0)
        {
            std::cout << "SEARCH" << std::endl;
            phonebook.show_contact();
        }
        else if (strncmp(commands, "EXIT", 5) == 0 || std::cin.eof())
        {
            std::cout << "GOOD BY" << std::endl;
            break ;
        }
        else
            std::cout << "WRONG COMMAND!!!" << std::endl;
    }
    return 0;
}