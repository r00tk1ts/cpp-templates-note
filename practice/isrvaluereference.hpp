template<typename T>
struct IsRValueReferenceT : std::false_type {};

template<typename T>
struct IsRValueReferenceT<T&&> : std::true_type {
    using BaseT = T;
};
