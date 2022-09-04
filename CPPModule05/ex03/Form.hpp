#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
    const std::string name;
    bool is_signed;
    const int grade_to_execute;
    const int grade_to_sign;

    public:
    virtual ~Form();
    Form(std::string name, int grade_to_execute, int grade_to_sign);
    Form &operator=(const Form &other);
    Form(const Form &other);

    std::string get_name() const;
    bool get_is_signed() const;
    int get_grade_to_execute() const;
    int get_grade_to_sign() const;
    void beSigned(Bureaucrat &bur);
    virtual void execute(Bureaucrat const & executor) const = 0;

    class FormNotSigned : public std::runtime_error {
    public: FormNotSigned(const std::string &error) : std::runtime_error
    (error) {};
    };

};

#endif