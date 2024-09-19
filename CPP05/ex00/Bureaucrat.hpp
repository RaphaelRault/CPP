#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat 
{
    private : 
        const std::string _name;
        int _grade;
        Bureaucrat();
    public :
        Bureaucrat(const std::string& (_name), int _grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();
        int getGrade() const;
        std::string getName() const;
        void incrementGrade();
        void decrementGrade();
        Bureaucrat &operator= (const Bureaucrat &duplicate);

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

std::ostream&   operator<<( std::ostream &out, const Bureaucrat &duplicate);

#endif
