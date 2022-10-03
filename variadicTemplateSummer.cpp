#include <iostream>

// base case
template<typename T>
T summer(T t) {
  return t;
}

// template case
template<typename T, typename... Args>
T summer(T first, Args... args){
  return first + summer(args...);
}

int main() {
  std::cout << summer(1, 2, 10, 20, 40) << std::endl;
  return 0;
}
