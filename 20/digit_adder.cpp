#include <iostream>
int digitAdder(int n) {
  int r{n % 10};
  if (r == n) {
    return n;
  }
  return r + digitAdder(n / 10);
}

int main() {
  std::cout << digitAdder(357) << "\n";
  std::cout << digitAdder(93427) << "\n";
  return 0;
}
