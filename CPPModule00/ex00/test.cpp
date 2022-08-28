#include <iostream>

using namespace std;

class First_class
{
    public: int i;

    void init(int q)
    {
        i = q;
    }

    First_class(int q)
    {
        i = q;
    }

    First_class()
    {
        i = 15;
    }

    int some_func()
    {
        return i;
    }
};

int main(int argc, char **argv) 
{ 
    
    First_class instance;
    First_class instance2(150);

    cout << instance.i << endl;
    cout << instance2.i << endl;

    return 0; 
}