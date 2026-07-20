template <int N> constexpr int factorial() {
  static_assert(N >= 0 && "N must be greater that 0");
  int n{N};
  int res{1};
  if (n <= 0) {
    return 1;
  }
  while (n > 0) {
    res *= n--;
  }
  return res;
}

int main() {
  static_assert(factorial<0>() == 1);
  static_assert(factorial<3>() == 6);
  static_assert(factorial<5>() == 120);

  return 0;
}
