#include <iostream>
#include <string>
#include "whatever.hpp"

int main(void)
{
    int a = 2;
    int b = 3;
    int x = 2;
    std::cout << "Swap" << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Min / Max" << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    std::cout << "x = b" << std::endl;
    std::cout << "min(b, x) = " << ::min(b, x) << std::endl;
    std::cout << "max(b, x) = " << ::max(b, x) << std::endl;
    std::cout << "Complex" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    return 0;
}