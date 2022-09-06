#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP

#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

class Span 
{
private:
	unsigned int size;
	std::vector<int> vector;
public:
	~Span();
	Span(unsigned int size);
	Span(const Span &span);
	Span &operator=(Span &span);

	void addNumber(int i);
	int shortestSpan();
	int longestSpan();
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

};

#endif