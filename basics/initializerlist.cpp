#include <iostream>

class Base {
    public:
        Base() : a(0) { std::cout << "default ctor" << std::endl; }
        Base(int x) : a(x) { std::cout << "custom ctor" << std::endl; }
        Base(std::initializer_list<int> var) {
            std::cout << "initializer_list" << std::endl;
            a = 0;
        }
    private:
        int a;
};

int main() {
    Base b1{};
    Base b2{3};
    Base b3 = {3};
    Base b4(4);
    Base b5 = Base(5);
}
