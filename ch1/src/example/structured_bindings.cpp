#include <iostream>
#include <array>
#include <string>
#include <utility>

struct Point {
  double m_x, m_y, m_z;
  static double m_w;
};

int main() {
  std::array<int, 3> values {1, 2, 3};
  auto [x, y, z] {values};
  std::cout << "x = " << x << " y = " << y << " z = " << z << "\n";
  Point point;
  point.m_x = 1.0; point.m_y = 2.0; point.m_z = 3.0;
  auto [m_x, m_y, m_z] {point};
  std::cout << "m_x = " << m_x << " m_y = " << m_y << " m_z = " << m_z << "\n";

  std::pair myPair {"hello", 5};
  auto [theString, theInt] {myPair};
  std::cout << "theString = " << theString << "\n";
  std::cout << "theInt = " << theInt << "\n";
  return 0;
}