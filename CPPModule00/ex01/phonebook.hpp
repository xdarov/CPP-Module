#ifndef PHONEBOOK_HPP 
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include "contact.hpp"

class PhoneBook
{
    public:
    Contact contacts[8];
    char buf[1026];

    PhoneBook();
    ~PhoneBook();
    void get_new_contact();
    char *get_input(char *message);
    void show_contact();
    bool check_int();
    int shift_contacts();
    void fill_out_contact(char *reference);
};

#endif