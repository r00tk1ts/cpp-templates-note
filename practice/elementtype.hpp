#include <vector>
#include <list>

template<typename T>
struct ElementT;   

template<typename T>
struct ElementT<std::vector<T>> {
    using Type = T;
};

template<typename T>
struct ElementT<std::list<T>> {
    using Type = T;
};

template<typename T, std::size_t N>
struct ElementT<T[N]> {
    using Type = T;
};

template<typename T>
struct ElementT<T[]>{
    using Type = T;
};
