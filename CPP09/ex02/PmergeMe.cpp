#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe & origin)
{
    *this = origin; 
}

PmergeMe & PmergeMe::operator=(const PmergeMe & origin)
{
    this->vector_ = origin.vector_;
    this->deque_ = origin.deque_;
    return *this;
}

void PmergeMe::printVector()
{
    for (std::vector<int>::iterator it = vector_.begin(); it < vector_.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}

void PmergeMe::printDeque()
{
    for (std::deque<int>::iterator it = deque_.begin(); it != deque_.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
}

void check_Numbers(char *tab)
{
    std::string str = tab;
    if (str[0] == '-')
        throw "Error: not a positive number.";
    if (str.length() > 10 || (str.length() == 10 && str > "2147483647"))
        throw "Error: too large a number.";
    if (!str.empty() && str.find_first_not_of("0123456789") != std::string::npos)
        throw "Error: not a number.";
}

void PmergeMe::ft_sort(char **tab)
{
    std::clock_t start, end;
    double Vtime, Dtime;
    int i = 1;
    int nb = 0;

    while (tab[i])
    {
        check_Numbers(tab[i]);
        std::istringstream(tab[i]) >> nb;
        vector_.push_back(nb);
        deque_.push_back(nb);
        i++;
    }

    std::cout << "\033[4mBefore :\033[0m";
    printVector();

    start = clock();
    ford_johnson_sort(vector_);
    end = clock();
    Vtime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

    start = clock();
    ford_johnson_sort(deque_);
    end = clock();
    Dtime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

    std::cout << "\n\033[4mAfter :\033[0m";
    printVector();
    std::cout << "" << std::endl;
    printDeque();
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "\n\033[4mTime to process a range of "<< vector_.size() <<  " elements with std::vector\033[0m : " << Vtime << " ms\n";
    std::cout << "\033[4mTime to process a range of "<< deque_.size() <<  " elements with std::deque\033[0m  : " << Dtime << " ms\n";
}


