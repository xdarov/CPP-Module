#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form
("RobotomyRequestForm", 72, 45) 
{
	std::cout << "RobotomyRequestForm constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form
("RobotomyRequestForm", 72, 45), target(target) 
{
	std::cout << "RobotomyRequestForm constructor is called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(
		const RobotomyRequestForm &RobotomyRequestForm): Form
		("RobotomyRequestForm", 72, 45), target(RobotomyRequestForm
		.target)
{}

void RobotomyRequestForm::execute(const Bureaucrat &bur) const
{
    if (this->get_is_signed() != true)
        throw Form::FormNotSigned("The form is not signed!");
    if (this->get_grade_to_execute() < bur.get_grade())
        throw Bureaucrat::GradeTooLowException("The grade is too low");
	std::srand(time(NULL));
    bur.executeForm(*this);
    if (std::rand() % 2 == 0)
	    std::cout << "Robotization was successful" << std::endl;
    else
	    std::cout << "Robotization failure" << std::endl;
}