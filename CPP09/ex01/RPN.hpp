#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cstdlib>
#include <iostream>

class RPN
{
    private:
        std::stack<int> stack;
        
        bool isOperator(const std::string &token);
        int operation(int a, int b, const std::string &op);
    public:
        RPN();
        int evaluate(const std::string &expression);
};

#endif