#pragma once

#include "accumtraits4.hpp"

template<typename T, typename AT = AccumulationTraits<T>>
auto accum(T const* beg, T const* end) {
    typename AT::AccT total = AT::zero();
    while(beg != end) {
        total += *beg;
        ++beg;
    }
    return total;
}
