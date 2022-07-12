#include "stack7decl.hpp"
#include <iostream>

template<typename T, typename Cont>
 template<typename T2, typename Cont2>
 Stack<T,Cont>& Stack<T,Cont>::operator= (Stack<T2,Cont2> const& op2) {
     elems.clear();
     elems.insert(elems.begin(), op2.elems.begin(), op2.elems.end());
     std::cout << "custom" << std::endl;
     return *this;
 }
