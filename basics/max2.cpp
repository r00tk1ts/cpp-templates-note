#include <iostream>
#include "type_name.h"

using namespace std;

int max(int a, int b) {
  cout << "nontemplate" << endl;  
  return b < a ? a : b;
}

template<typename T>
T max(T a, T b) {
  cout << "template version for " << type_name<T>() << endl;
  return b < a ? a : b;
}

int main() {
  ::max(7, 42);   // calls the nontemplate for two ints
  ::max(7.0, 42.0); // calls max<double>
  ::max('a', 'b');  // calls max<char>
  ::max<>(7, 42);   // calls max<int>
  ::max<double>(7, 42); // calls max<double>
  ::max('a', 42.7);     // calls the nontemplate for two ints
}
