#include <iostream>
#include <fmt/format.h>
#include <compare>

struct Foo {
  int val_;
  Foo(int val) : val_(val) {}
  bool operator<(const Foo& rhs) {
    return this->val_ < rhs.val_;
  }
};

int main() {
  int i {11};
  std::strong_ordering result {i <=> 0};
  if (result == std::strong_ordering::less) { std::cout << "less\n"; }
  if (result == std::strong_ordering::greater) { std::cout << "greater\n"; }
  if (result == std::strong_ordering::equal) { std::cout << "equal\n"; }

  if (std::is_lt(result)) { std::cout << "less\n"; }
  if (std::is_gt(result)) { std::cout << "greater\n"; }
  if (std::is_eq(result)) { std::cout << "equal\n"; }

  float fi {0.11};
  std::partial_ordering float_result {i <=> 0.0};
  if (float_result == std::partial_ordering::less) { std::cout << "less\n"; }
  if (float_result == std::partial_ordering::greater) { std::cout << "greater\n"; }
  if (float_result == std::partial_ordering::equivalent) { std::cout << "equivalent\n"; }
  return 0;
}