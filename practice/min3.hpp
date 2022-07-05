#include "iscontextualbool.hpp"
#include "lessresult.hpp"
#include "enableif.hpp"

template<typename T>
EnableIf<isContextualBool<LessResult<T const&, T const&>>, T const&>
min(T const& x, T const& y) {
    if (y < x) return y;
    return x;
}
