#include "isfunda.hpp"
#include <iostream>
#include "../basics/type_name.h"

template<typename T>
void test(T const&) 
{
    if (IsFundaT<T>::value) {
        std::cout << type_name<T>() << " is a fundamental type" << '\n';
    } else {
        std::cout << type_name<T>() << " is not a fundamental type" << '\n';
    }
}

int main()
{
    test(7);
    test("hello");
}
