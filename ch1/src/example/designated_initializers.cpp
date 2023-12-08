#include <iostream>

struct Employee {
  char firstInitial;
  char lastInitial;
  int employeeNumber;
  int salary {75000};
};

int main() {
  Employee anEmployee {
    .firstInitial = 'J',
    .lastInitial = 'D',
    .employeeNumber = 42,
    .salary = 8000
  };
  Employee faultEmployee {
    .lastInitial = 'D',
    .firstInitial = 'J'
  };
  std::cout << anEmployee.firstInitial << " " << anEmployee.lastInitial << " " << anEmployee.employeeNumber << "\n";
  return 0;
}