#include <iostream>

using namespace std;

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
            cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
            return ;
        }
        while (text[++i])
        {
            j = -1;
            while (text[i][++j])
                cout << (char)toupper(text[i][j]);
            cout << ' ';
        }
        cout << endl;
    }
};

int main(int argc, char **argv)
{
    Megaphone some_megaphone(&argv[1]);
    some_megaphone.get_upper_text();
    return 0;
}