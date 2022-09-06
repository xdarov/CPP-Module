#include "Span.hpp"
#include <vector>

int main(void)
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span span(1000000);
    int i = 0;

    while (i < 10000000)
    {
        span.addNumber(i);
        i += 10;
    }
 
    std::cout << "Append: shortest:" << span.shortestSpan() << " longest: " << span.longestSpan() << std::endl;;

    try
    {
        span.addNumber(i);
    }
    catch(std::runtime_error &e)
    {
        std::cout <<"Error: " << e.what() << std::endl;
    }

    return 0;
}