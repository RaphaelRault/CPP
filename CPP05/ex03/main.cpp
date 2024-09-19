#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{

    try {
        Intern  someRandomIntern;
        Bureaucrat bob("Bob", 2);
        Bureaucrat john("John", 50); 
        AForm *form1 = someRandomIntern.makeForm("robotomy request", "people");
        AForm *form2 = someRandomIntern.makeForm("presidential pardon", "population");
        AForm *form3 = someRandomIntern.makeForm("shrubbery creation", "Albert");

        std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
        bob.signForm(*form1);
        bob.execForm(*form1);
        john.signForm(*form1);
        john.execForm(*form1);
        std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
        bob.signForm(*form2);
        bob.execForm(*form2);
        bob.execForm(*form2);
        john.signForm(*form2);
        john.execForm(*form2);
        john.execForm(*form2);
        std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
        bob.signForm(*form3);
        bob.execForm(*form3);
        john.signForm(*form3);
        john.execForm(*form3);


        delete form1;
        delete form2;
        delete form3;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}