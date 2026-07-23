#include <iostream>

int main() {
  std::cout << "Enter a number: ";
  int x{};
  int y{};
  int z{};
  std::cin >> x >> y >> z;
  std::cout << x << ", " << y << " and " << z << "\n";
  return 0;
}
