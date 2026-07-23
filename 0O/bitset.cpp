#include <bitset>
#include <iostream>
int main() {
  std::bitset<8> bits{0b0000'0101};
  std::cout << bits << "\n";
  std::cout << sizeof(bits) << "\n";
  return 0;
}
