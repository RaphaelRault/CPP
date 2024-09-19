#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
    private:
    public:
        Intern();
        ~Intern();
        Intern(const Bureaucrat &copy);
        Intern &operator= (const Intern &duplicate);
        AForm *makeForm(const std::string name, const std::string target);
        class formNotFound : public std::exception
        {
            public: 
                virtual const char *what() const throw()
                {
                    return "Form not found.";
                }
        };
};
#endif