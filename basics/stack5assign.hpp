#include "stack5decl.hpp"

template<typename T>
 template<typename U>
Stack<T>& Stack<T>::operator=(Stack<U> const& op2) {
    Stack<U> tmp(op2);
    elems.clear();
    while(!tmp.empty()) {
        elems.push_front(tmp.top());
        tmp.pop();
    }
    return *this;
}
