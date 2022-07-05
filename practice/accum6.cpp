#include "accum6.hpp"
#include <iostream>

class MultPolicy {
    public:
        template<typename T1, typename T2>
        static void accumulate(T1& total, T2 const& value) {
            total *= value;
        }
};

int main() {
    int num[] = {1, 2, 3, 4, 5};

    std::cout << "the product of the integer values is " << accum<int, MultPolicy>(num, num+5) << '\n';
    std::cout << "the sum of the integer values is " << accum(num, num+5) << '\n';
    return 0;
}
