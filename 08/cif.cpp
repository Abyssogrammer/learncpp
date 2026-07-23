#include <iostream>
int main() {
  constexpr int x{};
  if constexpr (1 == 1) {
    std::cout << "This is the read world\n";
  } else {
    std::cout << "Either I'm sleep or something is really wrong\n";
  }
  if constexpr (x == 0) {
    std::cout << "Yep";
  }
  return 0;
}
