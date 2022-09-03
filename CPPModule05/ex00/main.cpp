#include "Bureaucrat.hpp"

int main(void){
    Bureaucrat bureaucrat = Bureaucrat();
    std::cout << bureaucrat.get_name() << std::endl;

    Bureaucrat bureaucrat1 = Bureaucrat("Bob", 20);
    std::cout << bureaucrat1.get_name() << std::endl;

    try
    {
        Bureaucrat bad = Bureaucrat("Halk", 0);
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout <<"Error: "  << e.what() << std::endl;
    }
    try{
        Bureaucrat newBur = Bureaucrat("BBB", 155);
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout <<"Error: "  << e.what() << std::endl;
    }
    return (0);
}