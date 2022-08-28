#ifndef CONTACTS_HPP 
#define CONTACTS_HPP


class Contact
{
    public:
    char first_name[1025];
    char last_name[1025];
    char nickname[1025];
    char phone_number[1025];
    char darkest_secret[1025];

    Contact();
    ~Contact();
};

#endif