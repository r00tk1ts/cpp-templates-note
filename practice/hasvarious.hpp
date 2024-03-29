#include <utility>
#include <type_traits>

// primary template:
template<typename, typename = std::void_t<>>
struct HasVariousT : std::false_type
{};

// partial specialization (may be SFINAE'd away):
template<typename T>
struct HasVariousT<T, std::void_t<decltype(std::declval<T>().begin()), typename T::difference_type, typename T::iterator>> : std::true_type
{};
