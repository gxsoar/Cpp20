#pragma once

#include <string>


namespace Records {

static const int DefaultStartingSalary {30000};
const int DefaultRaiseAndDemeritAmount {1000};

class Employee {
public:
  Employee(const std::string& firstName, const std::string& lastName);
  void promte(int raiseAmount = DefaultRaiseAndDemeritAmount);
  void demote(int demeritAmount = DefaultRaiseAndDemeritAmount);
  void hire();
  void fire();
  void display() const;
  void setFirstName(const std::string& firstName);
  const std::string& getFirstName() const;
  void setEmployeeNumber(int employeeNumber);
  int getEmployeeNumber() const;
  void setSalary(int newSalary);
  int getSalary() const;
  bool isHired() const;
private:
  std::string m_firstName_;
  std::string m_lastName_;
  int m_employeeNumber_ {-1};
  int m_salary_ { DefaultStartingSalary };
  bool m_hired_ {false};
};

};