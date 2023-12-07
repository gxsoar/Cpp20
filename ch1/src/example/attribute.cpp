#include <cstdlib>
#include <iostream>

[[nodiscard("Some explanation")]] int func() {
  return -1;
}

int func2(int parameter1, [[maybe_unused]]int parameter2) {
  return 0;
}

[[noreturn]] void forceProgramTermination() {
  std::exit(1);
}

bool isDongleAvailable() {
  bool isAvailable {false};
  return isAvailable;
}

bool isFeatureLicensed(int featureId) {
  if (!isDongleAvailable()) {
    forceProgramTermination();
  } else {
    bool isLicensed { featureId == 42 };
    return isLicensed;
  }
}

[[deprecated("unsafe method, please use xyz")]] void func3() {
  std::cout << "unsafe method\n";
}

int main() {
  func();
  func2(-1, -1);
  bool isLicensed {isFeatureLicensed(42) };
  func3();

  int value {3};
  if (value > 4) [[unlikely]] { std::cout << "unlikely\n"; }
  else { std::cout << "likely value < 3"; }

  switch (value) {
    [[likely]] case 1 :
    // do something
    break;
    [[likely]] case 2 :
    // do something
    break;
    [[unlikely]] case 12 :
    break;
  }
  return 0;
}