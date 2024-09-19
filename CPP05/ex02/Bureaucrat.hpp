/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <aramier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:27:06 by aramier           #+#    #+#             */
/*   Updated: 2024/06/27 12:31:24 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat 
{
    private : 
        const std::string _name;
        int _grade;
    public :
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();
        int getGrade() const;
        std::string getName() const;
        void incrementGrade();
        void decrementGrade();
        void signForm (AForm &form);
        Bureaucrat &operator= (const Bureaucrat &duplicate);
        void execForm(AForm &form);

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
