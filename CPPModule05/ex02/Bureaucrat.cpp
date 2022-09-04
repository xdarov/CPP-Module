#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("NoName")
{
    std::cout << "Create Bureaucrat" << std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    this->grade = grade;
    if (grade < 1)
        throw  Bureaucrat::GradeTooHighException("The grade is to hight");
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException("The grade is too low");
    else
        this->grade = grade;
    std::cout << "Create Bureaucrat" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destoy Bureaucrat" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    this->grade = other.grade;
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{

}

void Bureaucrat::increment()
{
    if (this->grade > 1)
        this->grade--;
    else
        throw Bureaucrat::GradeTooLowException("The grade is too high\n");
}

void Bureaucrat::decrement()
{
    if (this->grade < 150)
        this->grade++;
    else
        throw Bureaucrat::GradeTooHighException("The grade is to low\n");
}

std::string Bureaucrat::get_name() const
{
    return this->name;
}

int Bureaucrat::get_grade() const
{
    return this->grade;
}

bool Bureaucrat::signForm(Form &form) 
{
    if (form.get_is_signed() == false)
    {
        std::cout << this->name << " signed " << form.get_name() << std::endl;
        return true;
    }
    std::cout << form.get_name() << " already signed" << std::endl;
    return false;
}

void  Bureaucrat::executeForm(Form const & form) const
{
    std::cout << this->get_name() << " executed " << form.get_name() << std::endl;
}