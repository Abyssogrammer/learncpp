#include <iostream>
int main() {
  for (signed char x{'a'}; x <= 'z'; ++x) {
    std::cout << x << "\n";
  }
  return 0;
}
