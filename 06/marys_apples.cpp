#include <iostream>
#include <string_view>

// Write the function getQuantityPhrase() here
std::string_view getQuantityPhrase(int n) {
  if (n < 0)
    return "wait";
  if (n == 0)
    return "no";
  if (n == 1)
    return "a single";
  if (n < 10)
    return "a few";
  return "a lot";
}
// Write the function getApplesPluralized() here
std::string_view getApplesPluralized(int n) {
  if (n < 0)
    return "WTF";
  if (n == 0 || n > 1)
    return "apples";
  return "apple";
}
int main() {
  constexpr int maryApples{3};
  std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' '
            << getApplesPluralized(maryApples) << ".\n";

  std::cout << "How many apples do you have? ";
  int numApples{};
  std::cin >> numApples;

  std::cout << "You have " << getQuantityPhrase(numApples) << ' '
            << getApplesPluralized(numApples) << ".\n";

  return 0;
}
