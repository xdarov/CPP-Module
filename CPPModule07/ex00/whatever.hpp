#ifndef CPP_WHATEVER_HPP
#define CPP_WHATEVER_HPP


#include <iostream>
#include <string>

template <class T>
T min(const T &a, const T &b){
    if (a < b)
        return a;
    else if (a >b)
        return b;
    else
        return b;
}

template <class T>
T max(const T &a, const T &b){
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return b;
}

template <class T>
void swap(T &a, T &b){
    T temp;

    temp = a;
    a = b;
    b = temp;
}

#endif
