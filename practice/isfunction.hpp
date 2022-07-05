#include "typelist.hpp"

template<typename T>
struct IsFunctionT : std::false_type {};

template<typename R, typename... Params>
struct IsFunctionT<R (Params...)> : std::true_type {
    using Type = R;
    using ParamsT = Typelist<Params...>;
    static constexpr bool variadic = false;
};

template<typename R, typename... Params>
struct IsFunctionT<R (Params..., ...)> : std::true_type {
    using Type = R;
    using ParamsT = Typelist<Params...>;
    static constexpr bool variadic = true;
};
