#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    //std::cout << "Constructor called" << std::endl;
}

Intern::Intern(const Bureaucrat &copy)
{
    //std::cout << "Copy constructor called" << std::endl;
   *this = copy; 
}

Intern::~Intern()
{
    //std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator= (const Intern &duplicate)
{
    (void)duplicate;
    return *this;
}

AForm *Intern::makeForm(const std::string name, const std::string target)
{
    std::string formName[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    AForm *forms[] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
    
    for (int i = 0; i < 3; i++)
    {
        if (name == formName[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            for (int j = 0; j < 3; j++)
            {
                if (j != i)
                    delete forms[j];
            }
            return forms[i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        delete forms[i];
    }
    std::cout << name << " doesn't match a form" << std::endl;
    return NULL;
}
