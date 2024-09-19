#ifndef PMERGEME_H
# define PMERGEME_H

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <algorithm> // Pour std::lower_bound

class PmergeMe
{
private:
    std::vector<int> vector_;
    std::deque<int> deque_;

public:
    PmergeMe();
    PmergeMe(const PmergeMe & origin);
    PmergeMe & operator=(const PmergeMe & origin);
    ~PmergeMe();

    void ft_sort(char **tab);
    void printVector();
    void printDeque();

    template< typename T >
    void ford_johnson_sort(T & container) 
    {
        if (container.size() < 2)
            return;

        T larger;
        T smaller;

        for (size_t i = 0; i < container.size() - 1; i += 2)
        {
            if (container[i] > container[i + 1])
            {
                larger.push_back(container[i]);
                smaller.push_back(container[i + 1]);
            } else
            {
                larger.push_back(container[i + 1]);
                smaller.push_back(container[i]);
            }
        }

        if (container.size() % 2 != 0) {
            smaller.push_back(container.back());
        }

        ford_johnson_sort(larger);

        for (size_t i = 0; i < smaller.size(); ++i) {
            typename T::iterator pos = std::lower_bound(larger.begin(), larger.end(), smaller[i]);
            larger.insert(pos, smaller[i]);
        }

        container = larger;
    }
};

#endif
