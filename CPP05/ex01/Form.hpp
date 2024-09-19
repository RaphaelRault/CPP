#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string _name;
        bool        _signed;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        Form (const std::string &name, int gradeToSign);
        ~Form();
        Form (const Form &copy);
        std::string getName() const;
        bool formSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        Form& operator= (const Form& duplicate);
        void beSigned (const Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public: 
                virtual const char *what() const throw()
                {
                    return "Grade too high.";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Grade too low.";
                }
        };
};

std::ostream &operator<< (std::ostream &out, const Form &duplicate);

#endif