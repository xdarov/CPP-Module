#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern intern;
    Bureaucrat bur("absolute_power", 1);

    Form *form_robotomy = intern.makeForm("robotomy_cat", "cat");
    Form *form_shrubbery = intern.makeForm("shrubbery_new", "new_form");
    Form *form_rpresidential = intern.makeForm("rpresidential_bad_man", "bad_man");

    try
    {
        Form *false_form = intern.makeForm("bad form", "bad form");
        (void)false_form;
    }
    catch(Intern::InternException &e)
    {
        std::cout << "Error" << e.what() << std::endl;
    }

    form_robotomy->beSigned(bur);
    form_robotomy->execute(bur);

    form_shrubbery->beSigned(bur);
    form_shrubbery->execute(bur);

    form_rpresidential->beSigned(bur);
    form_rpresidential->execute(bur);

    delete form_robotomy;
    delete form_shrubbery;
    delete form_rpresidential;
}