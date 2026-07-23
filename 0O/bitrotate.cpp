#include <bitset>
#include <iostream>

constexpr size_t bitsetSize{sizeof(int) * 8};

std::bitset<bitsetSize> rotate(std::bitset<bitsetSize> bits, int roate);

int main() {
  std::bitset<bitsetSize> bits{255};
  std::cout << bits << "\n";
  for (int i = 0; i < 50; ++i)
    std::cout << rotate(bits, i) << "\n";

  return 0;
}

std::bitset<bitsetSize> rotate(std::bitset<bitsetSize> bits, int rotation) {
  bool hasOverflow{false};
  while (rotation) {
    if (bits.test(bitsetSize - 1)) {
      hasOverflow = true;
    }
    bits <<= 1;
    if (hasOverflow) {
      bits.set(0);
    }
    hasOverflow = false;
    --rotation;
  }
  return bits;
}
