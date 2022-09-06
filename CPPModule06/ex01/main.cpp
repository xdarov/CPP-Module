#include "Serialization.hpp"

uintptr_t serialize(Serialization* ptr)
{
	std::cout << "Serialization of data" << std::endl;
	return reinterpret_cast<uintptr_t>(ptr);
}

Serialization* deserialize(uintptr_t raw)
{
	std::cout << "Deserialization of data" << std::endl;
	return reinterpret_cast<Serialization *>(raw);
}

int main(void)
{
	struct Serialization *ser = new Serialization;
	ser->c = 's';
	ser->d = 0.0023;
	ser->f = 0.045F;
	ser->i = 9;

	std::cout << "before: \n" << "char: " << ser->c << "\ndouble: "
	<< ser->d << "\nfloat: " << ser->f << "\nint: " <<
	ser->i <<"\n\n";
	uintptr_t serData = serialize(ser);
	struct Serialization *reternData = deserialize(serData);

	(void)reternData;
	std::cout << "\nafter: \n" << "char: " << ser->c << "\ndouble: "
			  << ser->d << "\nfloat: " << ser->f << "\nint: " <<
			  ser->i <<"\n";

	return 0;
}