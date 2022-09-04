#include "Form.hpp"

int main(void)
{
    Bureaucrat bur_low;
    Bureaucrat bur_hight("bur_hight", 10);
    Form form("new_form", 50, 50);
    try
    {
        form.beSigned(bur_low);
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout <<"Error: "  << e.what() << std::endl;
    }
    form.beSigned(bur_hight);
    form.beSigned(bur_hight);

    return 0;
}