#include <iostream>

consteval double inchToMm(double inch) { return inch * 25.4; }

int main() {
  constexpr double const_inch {6.0};
  constexpr double mm1 {inchToMm(const_inch)};

  double dynamic_inch {8.0};
  double mm2 {inchToMm(dynamic_inch)};
  return 0;
}