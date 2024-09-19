#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include "Data.hpp"
#include <stdint.h>

class Serialization 
{
    private:
        Serialization();
        ~Serialization();
        Serialization(const Serialization &copy);
        Serialization &operator= (const Serialization &);
    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif