#include "AForm.hpp"

AForm::AForm (const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}
AForm::~AForm()
{
    //std::cout << "Destructor called." << std::endl;
}
int AForm::getGradeToSign() const
{
    return _gradeToSign;
}


std::string AForm::getName() const
{
    return _name;
}

bool AForm::getSigned() const
{
    return _signed;
}


int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

AForm::AForm (const AForm &copy) : _name(copy.getName()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute())
{
    //std::cout << "Copy constructor called" << std::endl;
}

AForm &AForm::operator= (const AForm &duplicate)
{
    if (this != &duplicate)
        _signed = duplicate.getSigned();
    return *this;
}

void AForm::beSigned (const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    _signed = true;
}

std::ostream &operator<< (std::ostream &out, const AForm &duplicate)
{
    out << "**\t\t Form \t\t**" << std::endl;
    out << "Form name : " << duplicate.getName() << std::endl;
    out << "Grade to sign : " << duplicate.getGradeToSign() << std::endl;
    out << "Grade to execute : " << duplicate.getGradeToExecute();
    return out;
}