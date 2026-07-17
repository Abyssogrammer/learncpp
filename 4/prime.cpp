#include <cmath>
#include <iostream>
int main(int, char **) {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;
  for (int i = 2; i <= std::sqrt(x); i++) {
    if (x % i == 0) {
      std::cout << x << " Is not a prime\n";
      return 0;
    }
  }
  std::cout << x << " Is a prime";
  return 0;
}
