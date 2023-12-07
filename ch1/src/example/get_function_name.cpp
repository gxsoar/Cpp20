#include <iostream>

int getFunctionName() {
  std::cout << "function name = " << __func__ << "\n";
  return 0;
}

int main() {
  getFunctionName();
  return 0;
}