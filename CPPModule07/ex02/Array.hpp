#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array 
{
private:
    T *arr;
    unsigned int _size;
public:
    Array();
    Array(unsigned int n);
    ~Array();
    Array(const Array &other);
    Array &operator=(const Array &other);
    T &operator[](unsigned int index);
    unsigned int size() const;
};

template<class T>
Array<T>::Array() : arr(0), _size(0) 
{}

template<class T>
Array<T>::Array(unsigned int n) 
{
    this->arr = new T[n];
    this->_size = n;
    for (unsigned int i = 0; i < _size; i++)
        this->arr[i] = 0;
}

template<class T>
Array<T>::~Array<T>() 
{
    delete []this->arr;
}

template <class T>
Array<T>::Array(const Array<T> &other) : _size(other._size) 
{
    this->arr = new T[this->_size];
    for (unsigned int i = 0; i < this->_size; i++)
        this->arr[i] = 0;
}

template <class T>
Array<T> &Array<T>::operator=(const Array<T> &other) 
{
    if (this != other)
	{
        this->_size = other._size;
        delete [] this->arr;
        this->arr = new T[this->_size];
        for (int i = 0; i < this->_size; i++)
            this->arr[i] = 0;
    }
    return (*this);
}

template <class T>
unsigned int Array<T>::size() const 
{
    return this->_size;
}

template <class T>
T &Array<T>::operator[](unsigned int index) 
{
    if (index < this->_size && index >= 0)
        return this->arr[index];
    else
        throw std::runtime_error("Array index out of bounds\n");
}



#endif //CPP_ARRAY_HPP
