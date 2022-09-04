#ifndef CPP_ShrubberyCreationForm_HPP  
#define CPP_ShrubberyCreationForm_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm
	&ShrubberyCreationForm);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm
			ShrubberyCreationForm);
	void execute(Bureaucrat const & bur) const;
};


#endif