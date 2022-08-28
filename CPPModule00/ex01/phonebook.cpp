#include "phonebook.hpp"

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

char *PhoneBook::get_input(char *message)
{
    memset(buf, '\0', 1026);
    while (buf[0] == '\0')
    {
        std::cout << message << std::endl;
        std::cin.getline(buf, 1024);
    }
    return buf;
}

int PhoneBook::shift_contacts()
{
    int i = 8;
    while(--i > 0)
        contacts[i] = contacts[i - 1];
    contacts[0].first_name[0] = '\0';
    return -1;
}

void PhoneBook::get_new_contact()
{
    int i = -1;

    while (++i < 8)
        if (contacts[i].first_name[0] == '\0')
            break;
        else if (i == 7)
            i = shift_contacts();
    strcpy(contacts[i].first_name, get_input((char *)"fill name"));
    std::cout << contacts[i].first_name << std::endl;
    strcpy(contacts[i].last_name, get_input((char *)"last name"));
    std::cout << contacts[i].last_name << std::endl;
    strcpy(contacts[i].nickname, get_input((char *)"nickname"));
    std::cout << contacts[i].nickname << std::endl;
    strcpy(contacts[i].phone_number, get_input((char *)"phone number"));
    std::cout << contacts[i].phone_number << std::endl;
    strcpy(contacts[i].darkest_secret, get_input((char *)"darkest secret"));
    std::cout << contacts[i].darkest_secret << std::endl;
}

bool PhoneBook::check_int()
{
    int i = -1;
    int index;

    while(buf[++i])
        if (!isdigit(buf[i]))
        {
            std::cout << "WRONG NUM" << std::endl;
            return false;
        }
    index = atoi(buf) - 1;
    if (index < 0 || index > 7)
    {
        std::cout << "INDEX OUT OF RANGE" << std::endl;
        return false;
    }
    return true;
    
}

void PhoneBook::fill_out_contact(char *ceil)
{
    std::cout << 10 - strlen(ceil) << std::endl;
    if (10 - (int)strlen(ceil) > 0)
        strlcpy(&buf[strlen(buf)], "          ", 11 - strlen(ceil));
    strlcpy(&buf[strlen(buf)], ceil, 11);
    if (strlen(ceil) > 10)
        buf[strlen(buf) - 1] = '.';
    strcpy(&buf[strlen(buf)], "|");
}

void PhoneBook::show_contact()
{
    int index;

    get_input((char *)"Enter num of contact");
    if (check_int())
    {
        index = atoi(buf) - 1;
        if (contacts[index].first_name[0] == '\0')
        {
            std::cout << "CONTACT IS EMPTY" << std::endl;
            return ;
        }
        memset(buf, '\0', 1026);
        fill_out_contact(contacts[index].first_name);
        fill_out_contact(contacts[index].last_name);
        fill_out_contact(contacts[index].nickname);
        fill_out_contact(contacts[index].phone_number);
        std::cout << buf << std::endl;
    }
}

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
        else if (strncmp(commands, "EXIT", 5) == 0)
            break;
        else
            std::cout << "WRONG COMMAND!!!" << std::endl;
    }
    return 0;
}
