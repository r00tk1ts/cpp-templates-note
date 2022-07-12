#include <deque>

template<typename T, template<typename Elem> class Cont = std::deque>
class Stack {
    private:
        Cont<T> elems;
    public:
        void push(T const&);
        void pop();
        T const& top() const;
        bool empty() const { return elems.empty(); }
};
