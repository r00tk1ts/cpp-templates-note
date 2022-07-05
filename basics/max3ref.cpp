#include <cstring>
#include <iostream>
#include "type_name.h"

using namespace std;

template<typename T>
T const& max(T const& a, T const& b) {
  cout << "template of 2 parameters for T: " << type_name<T>() << ", a: " << type_name<decltype(a)>() << endl;
  return b < a ? a : b; 
}

char const* max(char const* a, char const* b) {
  cout << "nontemplate for a: " << type_name<decltype(a)>() << endl;
  return std::strcmp(b, a) < 0 ? a : b;
}

template<typename T>
T const& max(T const& a, T const& b, T const& c) {
  cout << "template of 3 parameters for T: " << type_name<T>() << ", a: " << type_name<decltype(a)>() <<
    endl;
  return ::max(::max(a, b), c);
}

int main() {
  auto m1 = ::max(7, 4, 68);  // OK
  
  char const* s1 = "frederic";
  char const* s2 = "anica";
  char const* s3 = "lucas";
  auto m2 = ::max(s1,s2,s3);  // run-time ERROR
  // m2 is a dangling reference
}
