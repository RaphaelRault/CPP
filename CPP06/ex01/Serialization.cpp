#include "Serialization.hpp"

Serialization::Serialization()
{
    std::cout << "Constructor called." << std::endl;
}

Serialization::~Serialization()
{
    std::cout << "Destructor called." << std::endl;
}

Serialization::Serialization(const Serialization &copy)
{
    *this = copy;
}

Serialization &Serialization::operator=(const Serialization &)
{
    return *this;
}

Data* Serialization::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

uintptr_t Serialization::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}