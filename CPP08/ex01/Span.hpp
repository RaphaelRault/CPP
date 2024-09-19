#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span
{
    private:
        unsigned int N;
        std::vector<int> numbers;
    public:
        Span();
        ~Span();
        Span(unsigned int N);
        Span &operator=(Span const &other);
        Span(const Span &other);

        void addNumber(int number);
        int shortestSpan() const;
        int longestSpan() const;

        template<typename It>
            void addRange(It begin, It end)
            {
                while (begin != end)
                {
                    if (numbers.size() >= N)
                    {
                        throw FullSpanException();
                    }
                    numbers.push_back(*begin);
                    begin++;
                }
            }
        class FullSpanException : public std::exception
        {
            const char *what() const throw();
        };

        class NoSpanException : public std::exception
        {
            const char *what() const throw();
        };
        
};

#endif