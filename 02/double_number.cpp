#include <cstdlib>
#include <iostream>

int getNumber() {
  std::cout << "Enter a number: ";
  int x{};
  std::cin >> x;
  return x;
}

int doubleNumber(int x) { return x * 2; }

int main(int, char **) {
  std::cout << doubleNumber(getNumber()) << ": is the doubled value\n";
  return EXIT_SUCCESS;
}
