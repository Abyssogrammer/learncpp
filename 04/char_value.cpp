#include <iostream>
int main(int, char **) {
  std::cout << "Enter a character: ";
  char c{};
  std::cin >> c;
  std::cout << "You entered '" << c
            << "' with ACII code of: " << static_cast<int>(c) << "\n";
  return 0;
}
