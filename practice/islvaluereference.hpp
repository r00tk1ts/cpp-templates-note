template<typename T>
struct IsLValueReferenceT : std::false_type {
};

template<typename T>
struct IsLValueReferenceT<T&> : std::true_type {
    using BaseT = T;
};
