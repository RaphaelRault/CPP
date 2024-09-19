#include "Span.hpp"

Span::Span(unsigned int n) : N(n)
{}

Span::~Span() {}

Span::Span(const Span &other)
{
    this->N = other.N;
    this->numbers = other.numbers;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->N = other.N;
        this->numbers = other.numbers;
    }
    return (*this);
}

void Span::addNumber(int number)
{
    if (numbers.size() >= N)
        throw FullSpanException();
    numbers.push_back(number);
}

int Span::shortestSpan() const
{
    if (numbers.size() <= 1)
        throw NoSpanException();
    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());

    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sorted.size(); i++)
    {
        int span = sorted[i] - sorted[i - 1];
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}

int Span::longestSpan() const 
{
    if (numbers.size() <= 1)
        throw NoSpanException();
    
    std::vector<int>::const_iterator min = std::min_element(numbers.begin(), numbers.end());
    std::vector<int>::const_iterator max = std::max_element(numbers.begin(), numbers.end());

    return *max - *min;
}

const char *Span::FullSpanException::what() const throw()
{
    return "Span is full, cannot add more numbers";
}

const char *Span::NoSpanException::what() const throw()
{
    return "Not enough numbers to calculate span";
}
