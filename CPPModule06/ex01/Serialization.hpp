#ifndef CPP_SERIALIZATION_HPP
#define CPP_SERIALIZATION_HPP

#include <iostream>
#include <string>

struct Serialization
{
	char c;
	int i;
	float f;
	double d;
};

uintptr_t serialize(Serialization* ptr);
Serialization* deserialize(uintptr_t raw);


#endif
