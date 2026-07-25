#include <array>
#include <iostream>
#include <string_view>

template <typename T, std::size_t N>
void printArray(const std::array<T, N> &arr) {
  std::cout << "The Array(";
  std::string_view sep{""};
  for (T elem : arr) {
    std::cout << sep << elem;
    sep = ", ";
  }
  std::cout << ") has size of: " << arr.size() << "\n";
}

int main() {
  constexpr std::array arr1{1, 4, 9, 16};
  printArray(arr1);

  constexpr std::array arr2{'h', 'e', 'l', 'l', 'o'};
  printArray(arr2);

  return 0;
}
