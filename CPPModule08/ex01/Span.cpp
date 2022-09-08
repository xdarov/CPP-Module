#include "Span.hpp"

Span::Span(unsigned int size)
{
    this->size = size;
}
Span::~Span()
{}

Span::Span(const Span &span) : size(span.size), vector(span.vector)
{}

Span &Span::operator=(Span &span)
{
    this->size = span.size;
    this->vector = span.vector;
    return (*this);
}

void Span::addNumber(int i)
{
    if (vector.size() < this->size)
        vector.push_back(i);
	else
        throw std::runtime_error("Full container");
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if ((this->size - this->vector.size()) >= (unsigned long)(end - begin))
        vector.insert(vector.end(), begin, end);
	else
        throw std::runtime_error("Full container");
}

int Span::longestSpan()
{
    int min_val, max_val;
    if (this->vector.size() < 2)
        throw std::runtime_error("the container contains less than two elements");
	min_val = *std::min_element(vector.begin(), vector.end());
	max_val = *std::max_element(vector.begin(), vector.end());
	return std::abs(max_val - min_val);
}

int Span::shortestSpan()
{
    int res = INT_MAX;
    if (this->vector.size() < 2)
        throw std::runtime_error("the container contains less than two elements");
    std::sort(vector.begin(), vector.end());
    for (size_t i = 0; i < vector.size() - 1; ++i)
    {
        int dis = std::abs(vector.at(i) - vector.at(i + 1));
        if (dis < res)
            res = dis;
    }
    return res;
}