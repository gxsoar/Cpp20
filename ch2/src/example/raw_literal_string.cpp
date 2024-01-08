#include <string>
#include <iostream>

using namespace std::string_literals;

int main() {
  const char *str { R"(Hello "World"!)"};
  const char *text {R"(Line1 
  Line 2)"};
  printf("%s\n", str);
  printf("%s\n", text);
  // std::cout << str << "\n";
  // std::cout << text << "\n";
  return 0;
}