#include "stack6decl.hpp"

template<typename T>
 template<typename U>
 Stack<T>& Stack<T>::operator= (Stack<U> const& op2) {
     // remove existing elements
     elems.clear();
     // insert at the beginning
     // all elements from op2
     elems.insert(elems.begin(), op2.elems.begin(), op2.elems.end());
     return *this;
 }
