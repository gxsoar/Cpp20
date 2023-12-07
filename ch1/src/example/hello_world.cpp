#include <fmt/core.h>
#include <iostream>
#include <limits>

enum class PieceType {
  King = 1,
  Queen,
  Rook = 10,
  Pawn
};

int main(int argc, char const *argv[]) {
  std::cout << std::numeric_limits<int>::max() << "\n";
  std::cout << std::numeric_limits<int>::min() << "\n";
  using enum PieceType;
  PieceType pieces{King};
  if (int price = 100; price > 99) {
    std::cout << "price > 99" << "\n";
  } else if (price >= 0) {
    std::cout << "price >= 99 && price <= 0" << "\n";
  } else {
    std::cout << price << "\n";
  }
  return 0;
}
