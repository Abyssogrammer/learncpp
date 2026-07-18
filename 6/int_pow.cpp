#include <cassert>
#include <cstdint>
#include <iostream>
#include <limits>

constexpr std::int64_t intpow(std::int64_t base, int exp);

int main(int, char **) {
  std::cout << "Enter a number: ";
  std::int64_t n{};
  std::cin >> n;
  std::cout << "Here's the cube: " << intpow(n, 2);
  return 0;
}

constexpr std::int64_t intpow(std::int64_t base, int exp) {
  assert(exp >= 0 && "powint: exp parameter has negative value");

  if (base == 0)
    return (exp == 0) ? 1 : 0;

  bool negativeResult{false};
  if (base < 0) { // Check for negative result
    base *= -1;
    negativeResult = exp & 1;
  }

  std::int64_t res{1};
  while (exp > 0) {
    if (exp % 2) {
      if (res > std::numeric_limits<std::int64_t>::max() / base) {
        std::cerr << "powint: result overflowed\n";
        return std::numeric_limits<std::int64_t>::max();
      }

      res *= base;
    }
    exp /= 2;
    base *= base;
  }
  return negativeResult ? -res : res;
}
