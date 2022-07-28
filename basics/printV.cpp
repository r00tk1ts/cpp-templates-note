#include <iostream>

using namespace std;

template<typename T>
void printV(T arg) {
    cout << arg << endl;
}

class Test {   
    friend ostream& operator<< (ostream& os, const Test& t) {  return os; }
    public:
        Test(const string& p) : s(p) { cout << "default ctor" << endl; }
        Test(const Test& rhs) : i(rhs.i), s(rhs.s) { cout << "copy ctor" << endl; }
        Test(Test&& rhs) : i(rhs.i), s(std::move(rhs.s)) { cout << "move ctor" << endl; }
        
    private:    
        int i;
        string s;
};

Test returnTest() {
    return Test{"world"};
}

int main() {
    Test t1{"hello"};
    printV(t1);
    printV(std::move(t1));
    printV(returnTest());
    printV(Test{"oops"});
    return 0;
}
