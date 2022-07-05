template<typename T>
struct IsPointerT : std::false_type {
};

template<typename T>
struct IsPointerT<T*> : std::true_type {
    using BaseT = T;
};
