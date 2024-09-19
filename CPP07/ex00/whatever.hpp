#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename A>
void swap(A &a, A &b)
{
    A temp = a;
    a = b;
    b = temp;
}
template <typename B>
B const &min(B &a, B &b)
{
    if (a < b)
        return a;
    else
        return b;
}
template <typename C>
C const &max(C &a, C &b)
{
    if (a > b)
        return a;
    else
        return b;
}

#endif