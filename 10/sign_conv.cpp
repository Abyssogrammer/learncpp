#include <iostream>
#include <type_traits>
int main() {
  short x{-1};
  std::cout << "Short: " << x << "\n";
  std::cout << "Unsigned short: " << static_cast<unsigned short>(x) << "\n";
  std::cout << "reShorted: "
            << static_cast<short>(static_cast<unsigned short>(x)) << "\n";
  std::cout
      << typeid(static_cast<unsigned short>(12) + static_cast<int>(12)).name()
      << "\n";

  std::common_type_t<unsigned short, int> y{};
  std::cout << typeid(y + 1).name() << "\n";
  const int z{};
  std::cout << static_cast<short>(z) << "\n";
  auto str{"hello dear"};
  std::cout << typeid(str).name() << "\n";
  return 0;
}
