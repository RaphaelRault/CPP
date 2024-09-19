#include "Form.hpp"

int main( void )
{
    try {
        Bureaucrat bob("Bob", 10);
        Form form("Informations", 15);
        
        bob.signForm(form);

        std::cout << form << std::endl;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}