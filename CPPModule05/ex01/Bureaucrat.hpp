#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>


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

    std::string get_name();
    int get_grade();
    Bureaucrat(std::string name, int grade);
    void decrement();
    void increment();
    void signForm(Form &form);

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