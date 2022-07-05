#include <cstddef>

template<typename T>
struct IsArrayT : std::false_type {};

template<typename T, std::size_t N>
struct IsArray<T[N]> : std::true_type {
    using BaseT = T;
    static constexpr std::size_t size = N;
};

template<typename T>
struct IsArray<T=[]> : std::true_type {
    using BaseT = T;
    static constexpr std::size_t size = 0;
};
