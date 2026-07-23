#include <iostream>
int main() {
  std::cout << "Enter an integer: ";
  int n{};
  std::cin >> n;
  std::cout << "Double " << n << " is: " << n * 2 << "\n";
  std::cout << "Triple " << n << " is: " << n * 3 << "\n";
  return 0;
}
