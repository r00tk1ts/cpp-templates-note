#include "accum3.hpp"
#include "BigInt.hpp"
#include <iostream>

int main() {
    // create array of 5 integer values
    int num[] = {1, 2, 3, 4, 5};

    // print average value
    std::cout << "the average value of integer values is " << accum(num, num+5) / 5 << '\n';

    // create array of character values
    char name[] = "templates";
    int length = sizeof(name) - 1;

    // (try to) print average character value
    std::cout << "the average value of the characters in \"" << name << "\" is " << accum(name, name+length) / length << '\n';

    float fnum[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    std::cout << "the average value of the float values is " << accum(fnum, fnum+5) / 5 << '\n';

    BigInt bnum[] = {BigInt{1}, BigInt{2}, BigInt{3}, BigInt{4}, BigInt{5}};
    std::cout << "the average value of the BigInt values is " << accum(bnum, bnum+5).Get() / 5 << '\n';
    return 0;
}
