#include "ratio.hpp"

// duration type for values of type T with unit type U:
class Duration {
  public:
    using ValueType = T;
    using UnitType = typename U::Type;
  private:
    ValueType val;
  public:
    constexpr Duration(ValueType v = 0) : val(v) {  }
    constexpr ValueType value() const { return val; }
};
