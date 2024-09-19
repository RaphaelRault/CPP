#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <exception>
#include <iostream>
#include <vector>

class ValueNotFoundException : public std::exception {
public:
    const char* what() const throw() {
        return "Value not found in the container";
    }
};
template <typename T>
typename T::iterator easyfind(T &container, int value);


#endif
#include "easyfind.tpp"