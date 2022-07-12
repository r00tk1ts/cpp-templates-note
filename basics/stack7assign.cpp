#include "stack7assign.hpp"

int main() {
    Stack<int> s1, s2;
    Stack<float> s3, s4;
    s2 = s1;
    s3 = s2;
    s4 = s3;
    return 0;
}
