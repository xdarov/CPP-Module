#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP
#include "Form.hpp"

class Intern
{
	public:
	Intern();
	~Intern();
	Intern(const Intern &intern);
	Intern &operator=(const Intern intern);
	Form *makeForm(std::string formName, std::string formTarget);

	class InternException : public std::runtime_error {
	public: InternException(const std::string &error) : std::runtime_error
																(error) {};
	};

	Form *ReternRobotomyForm(std::string target);
	Form *ReternPresidentalForm(std::string target);
	Form *ReternShrebberyForm(std::string target);
};


#endif