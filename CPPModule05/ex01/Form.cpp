#include "Form.hpp"

Form::Form(std::string name, int grade_to_execute, int grade_to_sign) : name(name), 
grade_to_execute(grade_to_execute), grade_to_sign(grade_to_sign)
{
    is_signed = false;
    if (this->grade_to_execute < 1 || this->grade_to_sign)
        throw Form::GradeTooLowException("The grade is too low");
    else if (grade_to_execute > 150 || grade_to_execute > 150) 
		throw  Form::GradeTooHighException("The grade is to hight");
    std::cout << "Create Form" << std::endl;
}

Form::~Form()
{
    std::cout << "Destoy Form" << std::endl;
}

Form &Form::operator=(const Form &other)
{
    return *this;
}

Form::Form(const Form &other) : name(other.name), 
grade_to_execute(other.grade_to_execute), grade_to_sign(other.grade_to_sign)
{

}

std::string Form::get_name()
{
    return this->name;
}

bool Form::get_is_signed()
{
    return this->is_signed;
}

int Form::get_grade_to_execute()
{
    return this->grade_to_execute;
}

int Form::get_grade_to_sign()
{
    return this->grade_to_sign;
}