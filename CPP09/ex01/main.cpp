#include "RPN.hpp"

int main (int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Wrong argument number." << std::endl;
        return 1;
    }
    
    RPN numbers;
    try 
    {
        int res = numbers.evaluate(argv[1]);
        std::cout << "res = " << res << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}