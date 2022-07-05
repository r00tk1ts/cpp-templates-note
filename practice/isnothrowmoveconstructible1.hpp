#include <utility>
#include <type_traits>

template<typename T>
struct IsNothrowMoveConstructibleT : std::bool_constant<noexcept(T(std::declval<T>()))> 
{};
