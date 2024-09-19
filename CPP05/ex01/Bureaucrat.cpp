#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) 
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat (const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &duplicate)
{
    if (this != &duplicate)
        _grade = duplicate.getGrade();
    return *this;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

void Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

std::ostream&   operator<<( std::ostream &out, const Bureaucrat &duplicate)
{
    out << duplicate.getName() << ", Bureaucrat grade : " << duplicate.getGrade();
    return out;
}

void Bureaucrat::signForm (Form &form)
{
    try 
    {
        form.beSigned(*this);
        std::cout << *this << " signed " << form.getName() << std::endl;
    }
    catch (Form::GradeTooLowException &error)
    {
        std::cout << *this << " couldn't sign " << form.getName() << " because " << error.what() << std::endl;
    }
}