#include <iostream>
int factorial(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  for (int i{0}; i < 10; ++i) {
    std::cout << "Factorial of " << i << " is: " << factorial(i) << "\n";
  }
  return 0;
}
