#include <iostream>
#include <iterator>
#include <optional>
#include <vector>

template <typename T> std::optional<T> getVectorAt(std::vector<T> &v, int i) {
  if (static_cast<int>(v.size()) <= i || i < 0) {
    std::cout << "That is an invalid index\n";
    return {};
  }
  return v[static_cast<size_t>(i)];
}
int main() {
  std::vector<int> nums(3);
  std::cout << nums.size() << " " << std::size(nums) << "\n";
  std::cout << "Enter 3 numbers: ";
  for (size_t i = 0; i < nums.size(); ++i) {
    std::cin >> nums[i];
  }
  std::cout << "You entered";
  for (size_t i = 0; i < nums.size(); ++i) {
    std::cout << " " << nums[i];
  }
  std::cout << "\n";
  int idx{};
  std::cout << "Enter an index: ";
  std::cin >> idx;
  auto res{getVectorAt(nums, idx)};
  if (res.has_value()) {
    std::cout << res.value() << "\n";
  }
  return 0;
}
