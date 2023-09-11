#include "arrays.hpp"

// a1,a2: pointers by language rules
// a3: reference to array of known bound
// a4: reference to array of unknown bound
// x1: passing by value decays
// x2,x3: passing by reference
template<typename T1, typename T2, typename T3>
void foo(int a1[7], int a2[], int (&a3)[42], int (&x0)[], T1 x1, T2& x2, T3&& x3) {
    MyClass<decltype(a1)>::print();
    MyClass<decltype(a2)>::print();
    MyClass<decltype(a3)>::print();
    MyClass<decltype(x0)>::print();
    MyClass<decltype(x1)>::print();
    MyClass<decltype(x2)>::print();
    MyClass<decltype(x3)>::print();
}

int main() {
    int a[42];
    MyClass<decltype(a)>::print();

    extern int x[];
    MyClass<decltype(x)>::print();

    foo(a, a, a, x, x, x, x);
}

int x[] = {0,8,15};
