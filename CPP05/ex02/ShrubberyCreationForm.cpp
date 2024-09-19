#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm (const std::string &_target) : AForm("ShrubberyCreationForm", 145, 137), _target(_target)
{
    //std::cout << "Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target)
{
    //std::cout << "Copy constructor called" << std:endl;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &duplicate)
{
    if (this != &duplicate)
        _target = duplicate._target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::string filename = this->getName() + "_shrubbery";
    std::ofstream file(filename.c_str());
    file << "          .     .  .      +     .      .          ." << std::endl;
    file << "     .       .      .     #       .           ." << std::endl;
    file << "        .      .         ###            .      .      ." << std::endl;
    file << "      .      .   '#:. .:##'##:. .:#'  .      ." << std::endl;
    file << "          .      . '####'###'####'  ." << std::endl;
    file << "       .     '#:.    .:#'###'#:.    .:#'  .        .       ." << std::endl;
    file << "  .             '|#########'#########'        .        ." << std::endl;
    file << "        .    #  (_)'####'###'####'  .:#'   .       ." << std::endl;
    file << "     .     .  '#/|\\###''##'##''#######|'                  ." << std::endl;
    file << "               ./ \\#'#####'#####'##' (_)         .      ." << std::endl;
    file << "    .   '#:. ...  .:##'###'###'##:.  /|\\.. .:#'     ." << std::endl;
    file << "      .     '#######'##'#####'##'##|#####'      .     ." << std::endl;
    file << "    .    .     '#####''#######''##(_)#'    .      ." << std::endl;
    file << "            .     '      000      /|\\   .     ." << std::endl;
    file << "       .         .   .   000      / \\      .       . "<< std::endl;
    file << ".. .. ..................O000O........................ ......" << std::endl;
    file.close();
}