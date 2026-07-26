#include <iostream>

class Fraction {
public:
  Fraction() = default;
  explicit Fraction(int numerator, int denominator)
      : m_numerator{numerator}, m_denominator{denominator} {};

  int numerator() const { return m_numerator; }

  int denominator() const { return m_denominator; }

private:
  int m_numerator{};
  int m_denominator{};
};

std::ostream &operator<<(std::ostream &out, const Fraction &f) {
  out << f.numerator() << "/" << f.denominator();
  return out;
}

std::istream &operator>>(std::istream &in, Fraction &f) {
  int n{};
  int d{};
  if (in >> n >> d) {
    f = Fraction{n, d};
  }
  return in;
}

int main() {
  Fraction f1{};
  std::cout << "Enter fraction 1: ";
  std::cin >> f1;

  Fraction f2{};
  std::cout << "Enter fraction 2: ";
  std::cin >> f2;

  std::cout << f1 << " " << f2
            << '\n'; // note: The result of f1 * f2 is an r-value

  return 0;
}
