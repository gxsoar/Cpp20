#include <array>
#include <iostream>

int main() {
  for (std::array arrs {1, 2, 3, 4}; int i : arrs) {
    std::cout << i << "\n";
  }
  return 0;
}