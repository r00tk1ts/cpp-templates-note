template<typename T>
class Stack {
    private:
        std::deque<T> elems;
    public:
        void push(T const&);
        void pop();
        T const& top() const;
        bool empty() const { return elems.empty(); }

        // assign stack of elements of type U
        template<typename U>
        Stack& operator= (Stack<U> const&);
        // to get access to private members of Stack<U> for any type U
        template<typename> friend class Stack;
};
