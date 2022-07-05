#include <type_traits>

template<typename T, typename = std::void_t<>>
struct IsClassT : std::false_type {};

template<typename T>
struct IsClassT<T, std::void_t<int T::*>> : std::true_type {};
