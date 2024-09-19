#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (const std::string &_target) : AForm("RobotomyRequestForm", 72, 55), _target(_target)
{
    //std::cout << "Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), _target(copy._target)
{
    //std::cout << "Copy constructor called" << std:endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &duplicate)
{
    if (this != &duplicate)
        _target = duplicate._target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
        static int i;
        if (i % 2 == 0)
            std::cout << "BZZ " << _target << " has been robotomized" << std::endl;
        else 
            std::cout << "TUUUUT " << _target << " robotomy has failed" << std::endl;
        i++;
    }
}