#include <deque>

template<typename T>
class Stack {
    private:
        std::deque<T> elems;
    public:
        void push(T const&);
        void pop();
        T const& top() const;
        bool empty() const { return elems.empty(); }
        
        template<typename U>
        Stack& operator=(Stack<U> const&);
};
