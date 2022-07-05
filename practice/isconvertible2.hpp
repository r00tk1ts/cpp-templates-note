#include <type_traits>
#include <utility>

template<typename FROM, typename TO, bool = std::is_void_v<TO> || std::is_array_v<TO> || std::is_function_v<TO>>
struct IsConvertibleHelper {
    using Type = std::integral_constant<bool, std::is_void_v<TO> && std::is_void_v<FROM>>;
};

template<typename FROM, typename TO>
struct IsConvertibleHelper<FROM, TO, false> {
    private:
        // test() trying to call the helper aux(TO) for a FROM passed as F:
        static void aux(TO);
        template<typename F, typename = decltype(aux(std::declval<F>()))>
        static std::true_type test(void*);

        // test() fallback
        template<typename>
        static std::false_type test(...);
    public:
        using Type = decltype(test<FROM>(nullptr));
};

template<typename FROM, typename TO>
struct IsConvertibleT : IsConvertibleHelper<FROM, TO>::Type
{
};

//template<typename FROM, typename TO>
//using IsConvertible = typename IsConvertibleT<FROM, TO>::value_type;

template<typename FROM, typename TO>
using IsConvertible = typename IsConvertibleHelper<FROM, TO>::Type;

template<typename FROM, typename TO>
constexpr bool isConvertible = IsConvertible<FROM, TO>::value;
// constexpr bool isConvertible = IsConvertibleT<FROM, TO>::value;
