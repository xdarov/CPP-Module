#ifndef CPP_RobotomyRequestForm_HPP
#define CPP_RobotomyRequestForm_HPP

#include "Form.hpp"
#include <time.h>

class RobotomyRequestForm : public Form
{
private:
	std::string target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm
	&RobotomyRequestForm);
	RobotomyRequestForm &operator=(const RobotomyRequestForm
			RobotomyRequestForm);
	void execute(Bureaucrat const & bur) const;
};


#endif