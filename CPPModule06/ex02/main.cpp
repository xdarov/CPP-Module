#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>

Base *generate(void)
{
    std::srand(static_cast<unsigned int>(time(0)));
    int i = rand() % 3;

    switch (i) 
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
    }
    return NULL;
}

void identify(Base* p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a)
        std::cout << "A\n";
    else if (b)
        std::cout << "B\n";
    else if (c)
        std::cout << "C\n";
}

void identify(Base& p) 
{
    try 
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A\n";
    } catch  (std::bad_cast &e) 
    {}
    try 
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B\n";
    } catch (std::bad_cast &e)
    {}
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C\n";
    } catch (std::bad_cast &e)
    {}
}

int main(void)
{
    Base *base = generate();

    std::cout << "identify(base): ";
    identify(base);
    std::cout << "identify(&base): ";
    identify(*base);

    delete base;
    return 0;
}