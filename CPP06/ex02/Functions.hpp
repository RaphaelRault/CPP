#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <typeinfo> 

Base *generate();
void identify(Base *p);
void identify(Base &p);

#endif