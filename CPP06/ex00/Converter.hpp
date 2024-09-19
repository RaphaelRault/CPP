#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <limits>
#include <sstream>
#include <cstdlib>
#include <string>

class Converter
{
    private:
        Converter();
        ~Converter();
        Converter(const Converter &copy);
        Converter &operator= (const Converter &duplicate);
        static bool isChar(const std::string &literal);
        static bool isInt(const std::string &literal);
        static bool isFloat(const std::string &literal);
        static bool isDouble(const std::string &literal);
        static void converterChar (const std::string &literal);
        static void converterInt (const std::string &literal);
        static void converterDouble (const std::string &literal);
        static void converterFloat (const std::string &literal);
    public:
        static void convert(const std::string &literal);
};

#endif