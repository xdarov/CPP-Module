#include "Casts.hpp"

Casts::Casts(): inputString(""), typeInputString(""), _char(0), 
_int(0), _float(0.0F), _double(0.0)
{}

Casts::Casts(std::string inputString): inputString(inputString),
typeInputString(""), _char(0), _int(0), _float(0.0F), _double(0.0)
{
    this->getType();
    adapter();
    cast();
}

Casts::~Casts()
{}

Casts::Casts(const Casts &casts)
{
    *this = casts;
}

std::string Casts::getInputString() const
{
    return this->inputString;
}

char Casts::getChar() const
{
    return this->_char;
}

std::string Casts::getTypeInputString() const
{
    return this->typeInputString;
}

double Casts::getDouble()  const{
    return this->_double;
}

float Casts::getFloat() const
{
    return this->_float;
}

int Casts::getInt() const
{
    return this->_int;
}

Casts &Casts::operator=(const Casts casts)
{
    this->inputString = casts.getInputString();
    this->_int = casts.getInt();
    this->_float = casts.getFloat();
    this->_double = casts.getDouble();
    this->_char = casts.getChar();
    return (*this);
}

void Casts::getType()
{
    if (this->inputString.compare("-inf") == 0 || this->inputString.compare
    ("+inf") == 0 || this->inputString.compare("nan") == 0)
        this->typeInputString = "optional";
    else if (this->inputString.compare("-inff") == 0 || this->inputString
    .compare("+inff") == 0 || this->inputString.compare("nanf") == 0)
        this->typeInputString = "optional";
    else if (this->inputString.size() == 1)
    {
        if (isdigit(this->inputString[0]) == 0)
            this->typeInputString = "char";
        else
            this->typeInputString = "int";
    } else
    {
        bool isNumber = true;
        int i = 0;
        int sign = 0;
        int countDot = 0;
        while ((unsigned long)i < this->inputString.size() - 1){
            if (isdigit(this->inputString[i]) == 0)
            {
                if (this->inputString[i] == '-')
                {
                    sign++;
                    i++;
                    continue;
                }
                if (this->inputString[i] != '.')
                {
                    isNumber = false;
                    break;
                }
                countDot++;
                if (countDot > 2)
                {
                    isNumber = false;
                    break;
                }
            }
            i++;
        }
        if (isNumber && (sign == 1 || sign == 0))
        {
            if (isdigit(this->inputString[i]) != 0 && countDot == 1)
            {
                this->typeInputString = "double";
                return;
            } else if (isdigit(this->inputString[i]) != 0 && countDot == 0)
            {
                this->typeInputString = "int";
                return;
            } else if (this->inputString[this->inputString.size() - 1] == 'f'
            && (countDot == 2 || countDot == 1))
            {
                this->typeInputString = "float";
                return;
            }
        }
        throw DataException("Incorrect data\n");
    }
}

void Casts::setNumber(std::string setNum)
{
    this->inputString = setNum;
}

void Casts::adapter()
{
    if (this->inputString.compare(".f") == 0 || this->inputString.compare("-.f") == 0)
        throw DataException("Incorrect data\n");
    if (this->inputString[this->inputString.size() - 1] == 'f' &&
    this->inputString[this->inputString.size() - 2] == '.')
        throw DataException("Incorrect data\n");
    if (this->typeInputString.compare("float") == 0 || this->typeInputString
    .compare("double") == 0)
    {
        if (this->inputString[0] == '.')
            this->setNumber("0" + this->inputString);
        if (this->inputString[this->inputString.size() - 1] == '.')
            this->setNumber(this->inputString + "0");
        if (this->inputString[this->inputString.size() - 1] == 'f')
        {
            if (this->inputString[this->inputString.size() - 2] == '.')
            {
                std::string result = this->inputString;
                result[result.size() - 1] = '0';
                this->setNumber(result + "f");
            }
        }
    }
}

void Casts::castsIntToChar()
{
    std::cout << "char: ";
    if (this->_int >= 0 && this->_int <= 127)
    {
        if (this->_int >= 32 && this->_int < 127)
            std::cout << "'" << static_cast<char>(this->_int) << "'\n";
        else
            std::cout << "Not displayed\n";
    }
    else
        std::cout << "cannot be translated to char\n";

}

void Casts::charCase()
{
    this->_char = this->inputString[0];
    std::cout << "char: '" << this->_char << "'\n";
    try
    {
        if ((_double > 0 && _double - 2147483647 > 0) || (_double < 0 && _double + 2147483648 < 0))
            throw OverflowException("int: overflow\n");
        this->_int = static_cast<int>(this->_char);
        std::cout << "int: " << this->_int << "\n";
    } 
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
    this->_float = static_cast<float>(this->_char);
    std::cout << "float: " << this->_float << ".0f\n";
    this->_double = static_cast<double>(this->_char);
    std::cout << "double: " << this->_double << ".0\n";
}

void Casts::intCase()
{
    this->_double = std::stod(this->inputString);
    try
    {
        if ((_double > 0 && _double - 2147483647 > 0) || (_double < 0 && _double + 2147483648 < 0))
            throw OverflowException("int: overflow\n");
        this->_int = static_cast<int>(this->_double);
        castsIntToChar();
        std::cout << "int: " << this->_int << "\n";
    } catch (std::exception &e)
    {
        std::cout << e.what();
    }
    this->_float = static_cast<float>(this->_double);
    std::cout << "float: " << this->_float << ".0f\n";
    std::cout << "double: " << this->_double << ".0\n";
}

void Casts::floatCase()
{
    this->_double = std::stod(this->inputString);
    this->_float = static_cast<float>(this->_double);
    try
    {
        if ((_double > 0 && _double - 2147483647 > 0) || (_double < 0 && _double + 2147483648 < 0))
            throw OverflowException("int: overflow\n");
        this->_int = static_cast<int>(this->_double);
        castsIntToChar();
        std::cout << "int: " << this->_int << "\n";
    } catch (std::exception &e)
    {
        std::cout << e.what();
    }
    std::cout << "float: " << this->_float << "f\n";
    std::cout << "double: " << this->_double << "\n";
}

void Casts::doubleCase()
{
    this->_double = std::stod(this->inputString);
    this->_float = static_cast<float>(this->_double);
    try
    {
        if ((_double > 0 && _double - 2147483647 > 0) || (_double < 0 && _double + 2147483648 < 0))
            throw OverflowException("int: overflow\n");
        this->_int = static_cast<int>(this->_double);
        castsIntToChar();
        std::cout << "int: " << this->_int << "\n";
    } catch (std::exception &e)
    {
        std::cout << e.what();
    }
    std::cout << "float: " << this->_float << "f\n";
    std::cout << "double: " << this->_double << "\n";

}

void Casts::optionalCase()
{
    this->_double = std::stod(this->inputString);
    std::cout << "char: impossible\n";
    this->_float = static_cast<float>(this->_double);
    this->_int = static_cast<int>(this->_double);
    std::cout << "int: impossible\n";
    std::cout << "float: " << this->_float << "f\n";
    std::cout << "double: " << this->_double << "\n";
}

void Casts::cast()
{
    if (this->typeInputString.compare("char") == 0)
        this->charCase();
    else if (this->typeInputString.compare("int") == 0)
        this->intCase();
    else if (this->typeInputString.compare("float") == 0)
        this->floatCase();
    else if (this->typeInputString.compare("double") == 0)
    
        this->doubleCase();
    else
        this->optionalCase();
}