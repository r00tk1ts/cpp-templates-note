#include <iostream>

template<typename T>
T max(T a, T b) {
  std::cout << "max<T>() \n"
  return b < a ? a : b;
}

template<typename T>
T max(T a, T b, T c) {
  return max(max(a, b), c); // uses the template version even for ints because the following decalration
  comes too late
}

int max(int a, int b) {
  std::cout << "max(int, int) \n"
  return b < a ? a : b;
}

int main() {
  ::max(47,11,33);  // OOPS: uses max<T>() instead of max(int, int)
}
