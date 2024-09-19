#include "Converter.hpp"

int main (void)
{
    std::cout << "------------Test-------------" << std::endl;
    Converter::convert("a");
    std::cout << "***********************" << std::endl;
    Converter::convert("B");
    std::cout << "***********************" << std::endl;
    Converter::convert("2");
    std::cout << "***********************" << std::endl;
    Converter::convert("|");
    std::cout << "***********************" << std::endl;
    std::cout << "------------Test-------------" << std::endl;
    Converter::convert("412");
    std::cout << "***********************" << std::endl;
    Converter::convert("42");
    std::cout << "***********************" << std::endl;
    Converter::convert("-6");
    std::cout << "***********************" << std::endl;
    Converter::convert("-2147483648");
    std::cout << "***********************" << std::endl;
    Converter::convert("2147483647");
    std::cout << "-----------------------------" << std::endl;
    std::cout << "------------Test-------------" << std::endl;
    Converter::convert("0.0f");
    std::cout << "***********************" << std::endl;
    Converter::convert("4.2f");
    std::cout << "***********************" << std::endl;
    Converter::convert("-0.6f");
    std::cout << "***********************" << std::endl;
    Converter::convert("3.40282e+38f");
    std::cout << "***********************" << std::endl;
    Converter::convert("-3.40282e+38f");
    std::cout << "-----------------------------" << std::endl;
    std::cout << "------------Test-------------" << std::endl;
    Converter::convert("0.0");
    std::cout << "***********************" << std::endl;
    Converter::convert("4.2");
    std::cout << "***********************" << std::endl;
    Converter::convert("-0.6");
    std::cout << "***********************" << std::endl;
    Converter::convert("1.79769e+308");
    std::cout << "***********************" << std::endl;
    Converter::convert("-1.79769e+308");
    std::cout << "-----------------------------" << std::endl;
    std::cout << "------------Test-------------" << std::endl;
    Converter::convert("Hello World");
    std::cout << "***********************" << std::endl;
    Converter::convert("42a");
    std::cout << "-----------------------------" << std::endl;
}
