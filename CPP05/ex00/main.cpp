#include "Bureaucrat.hpp"

int main( void )
{
    try {
        Bureaucrat bob("Bob", 1);
        Bureaucrat john("John", 150);

        std::cout << bob << std::endl;
        std::cout << john << std::endl;
        
        // john.decrementGrade();
        // std::cout << john << std::endl;

        bob.incrementGrade();
        
        std::cout << bob << std::endl;
        std::cout << john << std::endl;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}