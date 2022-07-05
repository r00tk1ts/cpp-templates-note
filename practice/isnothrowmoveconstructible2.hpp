#include <utility>
#include <type_traits>

// primary template:
template<typename T, typename = std::void_t<>>
struct IsNoThrowMoveConstructibleT : std::false_type
{};

// partial specialization (may be SFINAE'd away):
template<typename T>
struct IsNoThrowMoveConstructibleT<T, std::void_t<decltype(T(std::declval<T>()))>> 
    : std::bool_constant<noexcept(T(std::declval<T>()))>
{};
