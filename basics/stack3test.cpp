#include "stack3.hpp"
#include <iostream>
#include <deque>

int main(){
    Stack<int> intStack;

    Stack<double, std::deque<double>> dblStack;

    intStack.push(7);
    std::cout << intStack.top() << '\n';
    intStack.pop();

    dblStack.push(42.42);
    std::cout << dblStack.top() << '\n';
    dblStack.pop();
}
