#include <iostream>

class Megaphone
{
    public:
    char **text;

    Megaphone(char **argv)
    {
        text = argv;
    }

    void get_upper_text()
    {
        int i = -1;
        int j;

        if (text[0] == NULL)
        {
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
            return ;
        }
        while (text[++i])
        {
            j = -1;
            while (text[i][++j])
                std::cout << (char)toupper(text[i][j]);
            std::cout << ' ';
        }
        std::cout << std::endl;
    }
};

int main(int argc, char **argv)
{
    (void)argc;
    Megaphone some_megaphone(&argv[1]);
    some_megaphone.get_upper_text();
    return 0;
}