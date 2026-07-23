#include <cstdint>
#include <iostream>
constexpr bool isEven(std::int64_t n) { return (n % 2 == 0); }

int main(int, char **) {
  std::cout << "Enter a number: ";
  std::int64_t n{};
  std::int64_t n2{};
  std::cin >> n;
  std::cout << n << " is " << (isEven(n) ? "Even\n" : "Odd\n");
  std::cout << (n++, ++n2);
  return 0;
}
