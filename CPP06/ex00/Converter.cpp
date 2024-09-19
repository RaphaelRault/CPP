#include "Converter.hpp"

Converter::Converter(void)
{
    std::cout << "constructor called" << std::endl;
}

Converter::~Converter ()
{
    //std::cout << "Destructor called." << std::endl;
}

Converter::Converter(const Converter &copy)
{
    *this = copy;
}

Converter &Converter::operator=(const Converter &)
{
    return *this;
}

bool Converter::isChar(const std::string &literal) 
{
    return literal.length() == 1 && !std::isdigit(literal[0]);
}

bool Converter::isInt(const std::string &literal)
{
    std::istringstream iss(literal);
    int n;
    iss >> n;
    return iss.eof() && !iss.fail();
}

bool Converter::isFloat(const std::string &literal)
{
    if (literal == "nanf" || literal == "-inff" || literal == "+inff")
        return true;
    if (literal[literal.length() - 1] != 'f')
        return false;
    std::istringstream iss(literal.substr(0, literal.length() - 1));
    float f;
    iss >> f;
    return iss.eof() && !iss.fail();
}   

bool Converter::isDouble(const std::string &literal)
{
    if (literal == "nan" || literal == "-inf" || literal == "+inf")
        return true;
    std::istringstream iss(literal);
    float d;
    iss >> d;
    return iss.eof() && !iss.fail();
}

void Converter::converterChar (const std::string &literal)
{
    char c = literal[0];
    std::cout << "char c : " << c << std::endl;
    std::cout << "int : " << static_cast<int>(c) << std::endl;
    std::cout << "float : " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double : " << static_cast<double>(c) << std::endl;
}

void Converter::converterInt (const std::string &literal)
{
    int i = std::atoi(literal.c_str());
    std::cout << "char : ";
    if (i < 0 || i > 127)
        std::cout << "Impossible" << std::endl;
    else if (i < 32 || i > 126)
        std::cout << "Non Displayable" << std::endl;
    else 
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    std::cout << "int : " << i << std::endl;
    std::cout << "float : " << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double : " << static_cast<double>(i) << std::endl;
}

void Converter::converterDouble (const std::string &literal)
{
    double d;
    if (literal == "nan")
        d = std::numeric_limits<double>::quiet_NaN();
    else if (literal == "+inf")
        d = std::numeric_limits<double>::infinity();
    else if (literal == "-inf")
        d = std::numeric_limits<double>::infinity();
    else
        d = std::atof(literal.c_str());

    std::cout << "char :";
    if (d != d || d < 0 || d > 127)
        std::cout << "Impossible" << std::endl;
    else if (d < 32 || d > 126)
        std::cout << "Non Displayable" << std::endl;
    else 
        std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
    
    std::cout << "Int : ";
    if (d != d || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
        std::cout << "Impossible" << std::endl;
    else 
        std::cout << static_cast<int>(d) << std::endl;

    std::cout << "float : " << static_cast<float>(d) << std::endl;
    std::cout << "double : " << d << std::endl;
}

void Converter::converterFloat (const std::string &literal)
{
    double f;
    if (literal == "nanf")
        f = std::numeric_limits<double>::quiet_NaN();
    else if (literal == "+inff")
        f = std::numeric_limits<double>::infinity();
    else if (literal == "-inff")
        f = std::numeric_limits<double>::infinity();
    else
        f = std::atof(literal.c_str());

    std::cout << "char :";
    if (f != f || f < 0 || f > 127)
        std::cout << "Impossible" << std::endl;
    else if (f < 32 || f > 126)
        std::cout << "Non Displayable" << std::endl;
    else 
        std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
    
    std::cout << "Int : " << std::endl;
    if (f != f || f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
        std::cout << "Impossible" << std::endl;
    else 
        std::cout << static_cast<int>(f) << std::endl;

    std::cout << "float : " << static_cast<float>(f) << "f" << std::endl;
    std::cout << "double : " << f << std::endl;
}

void Converter::convert(const std::string &literal) 
{
    if (isChar(literal))
        converterChar(literal);
    else if (isInt(literal)) 
        converterInt(literal);
    else if (isFloat(literal)) 
        converterFloat(literal);
    else if (isDouble(literal)) 
        converterDouble(literal);
    else std::cout << "Error: Invalid input" << std::endl;
}