#include <iostream>

class Fraction {
public:
  explicit Fraction(int numerator = 0, int denominator = 1)
      : m_numerator{numerator}, m_denominator{denominator} {};

  int numerator() const { return m_numerator; }

  int denominator() const { return m_denominator; }

private:
  int m_numerator{0};
  int m_denominator{1};
};

Fraction getFraction() {
  int nu{};
  int de{};
  std::cout << "Enter a value for numerator: ";
  std::cin >> nu;
  std::cout << "Enter a value for denominator: ";
  std::cin >> de;
  std::cout << '\n';

  return Fraction{nu, de};
}

Fraction multiply(const Fraction &f1, const Fraction &f2) {
  return Fraction{f1.numerator() * f2.numerator(),
                  f1.denominator() * f2.denominator()};
}

void printFraction(const Fraction &f) {
  std::cout << f.numerator() << '/' << f.denominator() << '\n';
}

int main() {
  Fraction f1{getFraction()};
  Fraction f2{getFraction()};

  std::cout << "Your fractions multiplied together: ";

  printFraction(multiply(f1, f2));

  return 0;
}
