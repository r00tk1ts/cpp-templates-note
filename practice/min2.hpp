#include "isconvertible.hpp"
#include "lessresult.hpp"
#include "enableif.hpp"

template<typename T>
EnableIf<isConvertible<LessResult<T const&, T const&>, bool>, T const&>
min(T const& x, T const& y)
{
    if (y < x) {
        return y;
    }
    return x;
}
