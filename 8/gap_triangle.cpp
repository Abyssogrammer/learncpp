#include <iostream>
int main() {
  for (int i{1}; i < 6; ++i) {
    for (int j{5}; j > 0; --j) {
      if (j <= i) {
        std::cout << j << " ";
      } else {
        std::cout << "  ";
      }
    }
    std::cout << "\n";
  }
  return 0;
}
