#include "BigInt.hpp"

template<typename T>
struct AccumulationTraits;

template<>
struct AccumulationTraits<char> {
    using AccT = int;
    static AccT const zero = 0;
};

template<>
struct AccumulationTraits<short> {
    using AccT = int;
    static AccT const zero = 0;
};

template<>
struct AccumulationTraits<int> {
    using AccT = long;
    static AccT const zero = 0;
};

template<>
struct AccumulationTraits<float> {
    using AccT = double;
    static AccT constexpr zero = 0.0;
};

template<>
struct AccumulationTraits<BigInt> {
    using AccT = BigInt;
    inline static const AccT zero = BigInt{0};
};
