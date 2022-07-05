#pragma once

#include <iterator>

template<typename Iter>
auto accum(Iter start, Iter end) {
    using VT = typename std::iterator_traits<Iter>::value_type;

    VT total{};
    while(start != end) {
        total += *start;
        ++start;
    }
    return total;
}
