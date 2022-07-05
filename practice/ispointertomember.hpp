template<typename T>
struct IsPointerMemberT : std::false_type {};

template<typename T, typename C>
struct IsPointerMemberT<T C::*> : std::true_type {
    using MemberT = T;
    using ClassT = C;
};
