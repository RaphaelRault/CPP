
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac < 2)
            throw "Error: Please provide at least one integer argument.";
        PmergeMe test;
        test.ft_sort(av);
    }
    catch(const char *str)
    {
        std::cerr << str << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << "Standard exception: " << e.what() << '\n';
    }

    return 0;
}
