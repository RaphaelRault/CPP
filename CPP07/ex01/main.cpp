#include "Iter.hpp"

template <typename T>

void printElement(const T &element)
{
    std::cout << element << " ";
}

void doubleInt(int &n)
{
    n *= 2;
}

int main()
{
    int Array[] = {1, 2, 3, 4, 5};
    size_t arrayLen = sizeof(Array) / sizeof(int);

    std::cout << "Original int array: ";
    iter(Array, arrayLen, printElement<int>);
    std::cout << std::endl;

    iter(Array, arrayLen, doubleInt);

    std::cout << "Int array after doubling: ";
    iter(Array, arrayLen, printElement<int>);
    std::cout << std::endl;

    std::string stringArray[] = {"Hello", "World", "!"};
    size_t stringArrayLength = sizeof(stringArray) / sizeof(std::string);

    std::cout << "String array: ";
    iter(stringArray, stringArrayLength, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}