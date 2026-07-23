#include <iostream>

int summerize(int x) {
  static int sum{};
  sum += x;
  return sum;
}

int main(int, char **) {
  int n{};
  while (true) {
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Current sum: " << summerize(n) << "\n";
  }
  return 0;
}
