#include <ios>
#include <iostream>
#include <limits>
#include <vector>

template <typename T> void printArray(const std::vector<T> &arr) {
  for (size_t i = 0ul; i < arr.size(); ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
}

int main() {
  std::vector arr{4, 6, 7, 3, 8, 2, 1, 9};
  printArray(arr);

  size_t idx{};
  while (true) {
    std::cout << "enter a number between 0 and 9: ";
    std::cin >> idx;
    if (!std::cin) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }
    if (std::cin.peek() != '\n') {
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if (idx > 9ul) {
      continue;
    }
    std::cout << arr[idx] << "\n";
  }

  return 0;
}
