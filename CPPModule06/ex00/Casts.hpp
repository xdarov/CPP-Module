#ifndef CPP_CASTS_HPP
#define CPP_CASTS_HPP

#include "iostream"
#include "string"
#include "iomanip"
#include <stdlib.h>

class Casts 
{
private:
	std::string inputString;
	std::string typeInputString;
	char _char;
	int _int;
	float _float;
	double  _double;
public:
	Casts();
	Casts(std::string inputString);
	~Casts();
	Casts(const Casts &casts);
	Casts &operator=(const Casts casts);
	std::string getInputString() const;
	void getType();
	void castsIntToChar();
	void castsChar();
	void adapter();
	void cast();
	void charCase();
	void intCase();
	void floatCase();
	void doubleCase();
	void optionalCase();

	char getChar() const;
	std::string getTypeInputString() const;
	int getInt() const;
	float getFloat() const;
	double getDouble() const;
	void setNumber(std::string setNum);

	class DataException : public std::runtime_error
	{
	public: DataException(const std::string &error) : std::runtime_error
																(error) {};
	};

	class OverflowException : public std::runtime_error
	{
	public: OverflowException(const std::string &error) : std::runtime_error
															  (error) {};
	};
};


#endif
