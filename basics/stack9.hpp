#include <deque>
#include <cassert>
#include <memory>

template<typename T, template<typename Elem, typename = std::allocator<Elem>> class Cont = std::deque>
class Stack {
    private:
        Cont<T> elems;
    public:
        void push(T const&);
        void pop();
        T const& top() const;
        bool empty() const {
            return elems.empty();
        }

        template<typename T2, template<typename Elem2, typename = std::allocator<Elem2>> class Cont2>
        Stack<T,Cont>& operator= (Stack<T2,Cont2> const&);
        
        template<typename, template<typename,typename>class>
        friend class Stack;
};

template<typename T, template<typename, typename> class Cont>
void Stack<T,Cont>::push(T const& elem) {
    elems.push_back(elem);
}

template<typename T, template<typename, typename> class Cont>
void Stack<T,Cont>::pop() {
    assert(!elems.empty());
    elems.pop_back();
}

template<typename T, template<typename, typename> class Cont>
T const& Stack<T,Cont>::top() const {
    assert(!elems.empty());
    return elems.back();
}

template<typename T, template<typename,typename> class Cont>
 template<typename T2, template<typename,typename> class Cont2>
 Stack<T,Cont>& Stack<T,Cont>::operator= (Stack<T2,Cont2> const& op2) {
     elems.clear();
     elems.insert(elems.begin(), op2.elems.begin(), op2.elems.end());
     return *this;
 }
