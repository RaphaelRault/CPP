#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string _name;
        bool        _signed;
        const int _gradeToSign;
        const int _gradeToExecute;
        
    public:
        AForm (const std::string &name, int gradeToSign, int gradeToExecute);
        ~AForm();
        AForm (const AForm &copy);
        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        AForm& operator= (const AForm& duplicate);
        void beSigned (const Bureaucrat &bureaucrat);
        virtual void        execute( const Bureaucrat& executor ) const = 0;

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
        class NotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Form not signed.";
                }
        };
};

std::ostream &operator<< (std::ostream &out, const AForm &duplicate);

#endif