#include "isconvertible.hpp"
#include <iostream>
#include <string>

int main() {
    std::cout << "const char* -> string : " <<  isConvertible<const char*, std::string> << std::endl;
    std::cout << "string -> const char*: " << isConvertible<std::string, const char*> << std::endl;
    std::cout << "int -> double : " << isConvertible<int, double> << std::endl;
    std::cout << "double -> int : " << isConvertible<double, int> << std::endl;
    std::cout << "int[] -> int* : " << isConvertible<int[5], int*> << std::endl;
    std::cout << "int* -> int[] : " << isConvertible<int*, int[5]> << std::endl;
    return 0;
}
