#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>  

int main( void )
{
    std::srand(std::time(0));
    try {
        Bureaucrat bob("bob", 1);
        Bureaucrat john("john", 149);
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
        bob.signForm(form1);
        bob.execForm(form1);
        john.signForm(form1);
        john.execForm(form1);
        std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
        bob.signForm(form2);
        bob.execForm(form2);
        bob.execForm(form2);
        john.signForm(form2);
        john.execForm(form2);
        john.execForm(form2);
        std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
        bob.signForm(form3);
        bob.execForm(form3);
        john.signForm(form3);
        john.execForm(form3);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}