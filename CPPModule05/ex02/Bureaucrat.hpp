#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
    const std::string name;
    int grade;

    public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &other);
    Bureaucrat(const Bureaucrat &other);

    std::string get_name() const;
    int get_grade() const;
    Bureaucrat(std::string name, int grade);
    void decrement();
    void increment();
    bool signForm(Form &form);
    void executeForm(Form const & form) const;

    class GradeTooHighException : public std::runtime_error {
    public: GradeTooHighException(const std::string &error) : std::runtime_error
    (error) {};
    };

    class GradeTooLowException : public std::runtime_error {
    public: GradeTooLowException(const std::string &error) : std::runtime_error
    (error) {};
    };
};

#endif