#include <iostream>
int main(int, char **) {
  std::cout << "Enter a boolean: ";
  std::cin >> std::boolalpha;
  bool x{};
  std::cin >> x;
  std::cout << std::boolalpha;
  std::cout << "You entered: " << x << std::noboolalpha << " AKA: " << x
            << "\n";
  return 0;
}
