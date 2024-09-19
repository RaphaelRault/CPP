// #include <iostream>
// #include <cstdlib>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
#include <iostream>
#include "Array.hpp"

int main()
{
    try {
        int *a = new int();
        std::cout << *a << std::endl;
        // Test default constructor
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;

        // Test constructor with size
        Array<int> intArray(5);
        std::cout << "Int array size: " << intArray.size() << std::endl;

        // Test element access and modification
        for (unsigned int i = 0; i < intArray.size(); ++i)
            intArray[i] = i * 2;

        std::cout << "Int array elements: ";
        for (unsigned int i = 0; i < intArray.size(); ++i)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;

        // Test copy constructor
        Array<int> copiedArray(intArray);
        std::cout << "Copied array size: " << copiedArray.size() << std::endl;
        std::cout << "Copied array elements: ";
        for (unsigned int i = 0; i < copiedArray.size(); ++i)
            std::cout << copiedArray[i] << " ";
        std::cout << std::endl;

        // Test assignment operator
        Array<int> assignedArray = intArray;
        std::cout << "Assigned array size: " << assignedArray.size() << std::endl;
        std::cout << "Assigned array elements: ";
        for (unsigned int i = 0; i < assignedArray.size(); ++i)
            std::cout << assignedArray[i] << " ";
        std::cout << std::endl;

        // Test independence of copies
        intArray[0] = 100;
        std::cout << "Original array after modification: " << intArray[0] << std::endl;
        std::cout << "Copied array after original's modification: " << copiedArray[0] << std::endl;

        // Test out of bounds access
        std::cout << "Attempting to access out of bounds index..." << std::endl;
        std::cout << intArray[10] << std::endl;  // This should throw an exception
    }
    catch (const Array<int>::OutOfBoundsException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}