#ifndef CPP_MUTANTSTACK_HPP
#define CPP_MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

template <class T>
class MutantStack : public std::stack<T> 
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack<T> &mutantStack) : std::stack<T>
		        (mutantStack) {};
		MutantStack const &operator=(MutantStack<T> &mutantStack)
		{
			std::stack<T>::operator=(mutantStack);
			return (*this);
		}

		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}
};

#endif