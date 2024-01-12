#include <cstddef>
#include <string_view>
#include <string>
#include <iostream>
#include <fmt/format.h>

auto extraction(std::string_view txt) {
  return txt.substr(txt.find('.'));
}

void handleExtraction(const std::string &file) {
  std::cout << "hanleExtraction\n";
}

int main() {
  std::string fileName {R"(c:\temp\c++20 file.txt)"};
  std::cout <<  fmt::format("C++ string: {}", extraction(fileName)) << "\n";
  const char * cString {R"(c:\temp\c++temmplate file.txt)"};
  std::cout << fmt::format("Literal : {}", extraction(R"(c:\temp\modern c++ file.txt)")) << "\n";

  const char *raw{R"(C:\temp\linux kernel file.txt)"};
  size_t length {100};
  std::cout << fmt::format("Raw: {}", extraction(std::string_view {raw, length})) << "\n";

  handleExtraction(extraction("my file.ext").data());

  std::string s1 {"modern"};
  std::string_view s2 {"C++"};
  // auto res {s1 + s2};

  return 0;
}