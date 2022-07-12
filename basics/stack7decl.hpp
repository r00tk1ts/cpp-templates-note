#include <deque>
#include <iostream>

template<typename T, typename Cont = std::deque<T>>
class Stack {
    private:
        Cont elems;
    public:
        void push(T const&);
        void pop();
        T const& top() const;
        bool empty() const { return elems.empty(); }

        Stack& operator= (Stack const& rhs) {elems = rhs.elems;std::cout << "default" << std::endl;return *this;}
        template<typename T2, typename Cont2>
        Stack& operator= (Stack<T2,Cont2> const&);

        template<typename, typename> friend class Stack;
};
