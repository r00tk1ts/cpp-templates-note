#include <utility>
#include <type_traits>

template<typename T>
class IsContextualBoolT {
private:
    template<typename> struct Identity;
    template<typename U> static std::true_type
        test(Identity<decltype(std::declval<U>() ? 0 : 1)>*);
    template<typename U> static std::false_type
        test(...);
public:
    static constexpr bool value = decltype(test<T>(nullptr))::value;
};

template<typename T>
constexpr bool isContextualBool = IsContextualBoolT<T>::value;
