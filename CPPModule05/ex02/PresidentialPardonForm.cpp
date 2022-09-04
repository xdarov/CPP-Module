#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form
("PresidentialPardonForm", 25, 5) 
{
	std::cout << "PresidentialPardonForm constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form
("PresidentialPardonForm", 25, 5), target(target) 
{
	std::cout << "PresidentialPardonForm constructor is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &presidentialPardonForm): Form
		("PresidentialPardonForm", 25, 5), target(presidentialPardonForm
		.target)
{}

void PresidentialPardonForm::execute(const Bureaucrat &bur) const
{
    if (this->get_is_signed() != true)
        throw Form::FormNotSigned("The form is not signed!");
    if (this->get_grade_to_execute() < bur.get_grade())
        throw Bureaucrat::GradeTooLowException("The grade is too low");
    bur.executeForm(*this);
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}