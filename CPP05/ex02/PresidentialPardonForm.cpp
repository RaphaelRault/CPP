#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"


PresidentialPardonForm::PresidentialPardonForm (const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    //std::cout << "Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), _target(copy._target)
{
    //std::cout << "Copy constructor called" << std:endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &duplicate)
{
    if (this != &duplicate)
        _target = duplicate._target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "Informs that " << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}