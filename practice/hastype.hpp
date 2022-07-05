#include <type_traits>

#define DEFINE_HAS_TYPE(MemType)    \
    template<typename, typename = std::void_t<>>    \
    struct HasTypeT_##MemType                       \
     : std::false_type {  };                        \
    template<typename T>                            \
    struct HasTypeT_##MemType<T, std::void_t<typename T::MemType>>  \
     : std::true_type {  }
