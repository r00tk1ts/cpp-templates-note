// construct a set of match() overloads for the types in Types...:
template<typename... Types>
struct MatchOverloads;

// basis case: nothing matched:
template<>
struct MatchOverloads<> {
    static void match(...);
};

// recursive case: introduce a new match() overload:
template<typename T1, typename... Rest>
struct MatchOverloads<T1, Rest...> : public MatchOverloads<Rest...> {
    static T1 match(T1);        // introduce overload for T1
    using MatchOverloads<Rest...>::match;   // collect overloads from bases
};

// find the best match for T in Types...:
template<typename T, typename... Types>
struct BestMatchInSetT {
    using Type = decltype(MatchOverloads<Types...>::match(declval<T>()));
};

template<typename T, typename... Types>
using BestMatchInSet = typename BestMatchInSetT<T, Types...>::Type;
