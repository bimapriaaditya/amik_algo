// main.cpp
#include <iostream>
#include "math/trigonometry.cpp"

int main() {
  Trigonometry trig;
  double result = trig.sin(3.14 / 2);
  std::cout << "The result is: " << result << std::endl;
  return 0;
}
