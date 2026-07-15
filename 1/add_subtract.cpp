#include <iostream>
int main() {
  int x{};
  int y{};
  std::cout << "Enter an integer: ";
  std::cin >> x;
  std::cout << "Now enter another one: ";
  std::cin >> y;
  std::cout << x << " + " << y << " = " << x + y << "\n";
  std::cout << x << " - " << y << " = " << x - y << "\n";
  return 0;
}
