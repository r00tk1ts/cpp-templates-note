#include "isdefaultconstructible2.hpp"
#include <iostream>

struct S {
    S() = delete;
};

int main() {
    std::cout << "Is type int constructible? The answer is " << IsDefaultConstructibleT<int>::value << std::endl;
    std::cout << "Is type S constructible? The answer is " << IsDefaultConstructibleT<S>::value << std::endl;
    return 0;
}
