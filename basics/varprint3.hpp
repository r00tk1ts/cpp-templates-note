#include <iostream>

template<typename T, typename... Types>
void print(T firstArg, Types... args) {
    std::cout << firstArg << '\n';
    if constexpr(sizeof...(args) > 0) {
        print(args...);
    }
}
