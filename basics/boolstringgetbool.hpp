#include "boolstring.hpp"

template<>
inline bool BoolString::get<bool>() const {
    return value == "true" || value == "1" || value == "on";
}
