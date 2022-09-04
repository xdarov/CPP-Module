#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form
("ShrubberyCreationForm", 145, 137) 
{
	std::cout << "ShrubberyCreationForm constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form
("ShrubberyCreationForm", 145, 137), target(target) 
{
	std::cout << "ShrubberyCreationForm constructor is called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(
		const ShrubberyCreationForm &ShrubberyCreationForm): Form
		("ShrubberyCreationForm", 145, 137), target(ShrubberyCreationForm
		.target)
{}

void ShrubberyCreationForm::execute(const Bureaucrat &bur) const
{
    if (this->get_is_signed() != true)
        throw Form::FormNotSigned("The form is not signed!");
    if (this->get_grade_to_execute() < bur.get_grade())
        throw Bureaucrat::GradeTooLowException("The grade is too low");
	std::srand(time(NULL));
    std::ofstream out(this->target + "_shrubbery");
	if (out.is_open())
	{
		bur.executeForm(*this);
		out << 
"                                                         .\n"
"                                              .         ;  \n"
"                 .              .              ;%     ;;   \n"
"                   ,           ,                :;%  %;   \n"
"                    :         ;                   :;%;'     .,   \n"
"           ,.        %;     %;            ;        %;'    ,;\n"
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
"              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
"                `%;.     ;%;     %;'         `;%%;.%;'\n"
"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
"                    `:%;.  :;bd%;          %;@%;'\n"
"                      `@%:.  :;%.         ;@@%;'   \n"
"                        `@%.  `;@%.      ;@@%;         \n"
"                          `@%%. `@%%    ;@@%;        \n"
"                            ;@%. :@%%  %@@%;       \n"
"                              %@bd%%%bd%%:;     \n"
"                                #@%%%%%:;;\n"
"                                %@@%%%::;\n"
"                                %@@@%(o);  . '         \n"
"                                %@@@o%;:(.,'         \n"
"                            `.. %@@@o%::;         \n"
"                               `)@@@o%::;         \n"
"                                %@@(o)::;        \n"
"                               .%@@@@%::;         \n"
"                               ;%@@@@%::;.          \n"
"                              ;%@@@@%%:;;;. \n"
"                          ...;%@@@@@%%:;;;;,..\n";
		std::cout << "The form is completed" << std::endl;
	}
	else
		std::cout << "Error Open file" << std::endl;
}