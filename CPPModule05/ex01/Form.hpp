#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"


class Form
{
    private:
    const std::string name;
    bool is_signed;
    const int grade_to_execute;
    const int grade_to_sign;

    public:
    ~Form();
    Form(std::string name, int grade_to_execute, int grade_to_sign);
    Form &operator=(const Form &other);
    Form(const Form &other);

    std::string get_name();
    bool get_is_signed();
    int get_grade_to_execute();
    int get_grade_to_sign();
    void beSigned(Bureaucrat bur);

};

#endif