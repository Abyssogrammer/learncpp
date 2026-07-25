#include <iostream>
#include <limits>
#include <string>

std::string getBinRep(unsigned int n) {
  using namespace std::string_literals;
  if (n == 0) {
    return "0"s;
  }
  if (n == 1) {
    return "1"s;
  }
  return getBinRep(n >> 1) + (n & 1 ? "1"s : "0"s);
}

int main() {
  int n{};
  while (true) {
    std::cout << "Enter a positive number: ";
    std::cin >> n;
    if (!std::cin) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }
    std::cout << "bin(\"" << getBinRep(static_cast<unsigned int>(n)) << "\")\n";
  }

  return 0;
}
