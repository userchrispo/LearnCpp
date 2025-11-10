#include <iostream>

template <typename T>
// so we can use the function max using any type, integer, char, double. doenst matter, this is easier than to overload and create a seperate function for each different type.
// including 2 different typenames will alllow to choose int/double 2 different types. regular is the same.

T max1(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{

    std::cout << max1(1, 2) << '\n';
}