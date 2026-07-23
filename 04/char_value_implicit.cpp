#include <iostream>

int charToInt(char x) { return x; }

int main(int, char **) {
  std::cout << "Enter a character: ";
  char c{};
  std::cin >> c;
  std::cout << "You entered '" << c << "' with ACII code of: " << charToInt(c)
            << "\n";
  return 0;
}
