#include <iostream>
#include <typeinfo>
#include "myfirst.hpp"

template<typename T>
void printTypeof(const T& t) {
  std::cout << type_id(t).name() << std::endl;
} 
