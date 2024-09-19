#include "Form.hpp"

Form::Form (const std::string &name, int gradeToSign) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(0)
{
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
}
Form::~Form()
{
    //std::cout << "Destructor called." << std::endl;
}
int Form::getGradeToSign() const
{
    return _gradeToSign;
}


std::string Form::getName() const
{
    return _name;
}

bool Form::formSigned() const
{
    return _signed;
}


int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

Form::Form (const Form &copy) : _name(copy.getName()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute())
{
    //std::cout << "Copy constructor called" << std::endl;
}

Form &Form::operator= (const Form &duplicate)
{
    if (this != &duplicate)
        _signed = duplicate.formSigned();
    return *this;
}

void Form::beSigned (const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _signed = true;
}

std::ostream &operator<< (std::ostream &out, const Form &duplicate)
{
    out << "**\t\t Form \t\t**" << std::endl;
    out << "Form name : " << duplicate.getName() << std::endl;
    out << "Grade to sign : " << duplicate.getGradeToSign() << std::endl;
    out << "Grade to execute : " << duplicate.getGradeToExecute();
    return out;
}