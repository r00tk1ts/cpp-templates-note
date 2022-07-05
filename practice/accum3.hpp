#pragma once

#include "accumtraits3.hpp"

template<typename T>
auto accum(T const* beg, T const* end) {
    using AccT = typename AccumulationTraits<T>::AccT;

    AccT total = AccumulationTraits<T>::zero;   // init total by trait value
    while(beg != end) {
        total += *beg;
        ++beg;
    }
    return total;
}
