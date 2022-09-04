#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void)
{
    Bureaucrat bur_low;
    Bureaucrat bur_hight("bur_hight", 5);
    PresidentialPardonForm presidential_form("bad_man");
    try
    {
        presidential_form.beSigned(bur_low);
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout <<"Error: "  << e.what() << std::endl;
    }
    presidential_form.beSigned(bur_hight);
    presidential_form.beSigned(bur_hight);
    try
    {
        presidential_form.execute(bur_low);
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout <<"Error: "  << e.what() << std::endl;
    }
    presidential_form.execute(bur_hight);
    std::cout << "-------------------------" << std::endl;

    RobotomyRequestForm robotomy_form("bad_man");
    try
    {
        robotomy_form.beSigned(bur_low);
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout <<"Error: "  << e.what() << std::endl;
    }
    robotomy_form.beSigned(bur_hight);
    robotomy_form.beSigned(bur_hight);
    try
    {
        robotomy_form.execute(bur_low);
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout <<"Error: "  << e.what() << std::endl;
    }
    robotomy_form.execute(bur_hight);
    std::cout << "-------------------------" << std::endl;
        ShrubberyCreationForm shrubbery_form("bad_man");
    try
    {
        shrubbery_form.beSigned(bur_low);
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout <<"Error: "  << e.what() << std::endl;
    }
    shrubbery_form.beSigned(bur_hight);
    shrubbery_form.beSigned(bur_hight);
    try
    {
        shrubbery_form.execute(bur_low);
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout <<"Error: "  << e.what() << std::endl;
    }
    shrubbery_form.execute(bur_hight);
    return 0;
}