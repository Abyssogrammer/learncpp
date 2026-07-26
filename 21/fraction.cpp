#include <cstdlib>
#include <iostream>

class Fraction {
public:
  static int gdb(int a, int b) {
    return (b == 0) ? std::abs(a) : Fraction::gdb(b, a % b);
  }

  explicit Fraction(int numerator, int denominator)
      : m_numerator{numerator}, m_denominator{denominator} {}

  void print() { std::cout << m_numerator << "/" << m_denominator << "\n"; }

  Fraction *reduce() {
    int gdbRes{Fraction::gdb(m_numerator, m_denominator)};
    if (m_numerator % gdbRes == 0 && m_denominator % gdbRes == 0) {
      m_numerator /= gdbRes;
      m_denominator /= gdbRes;
    }
    return this;
  }

  friend Fraction operator*(const Fraction &a, const Fraction &b);
  friend Fraction operator*(const Fraction &a, int b);
  friend Fraction operator*(int a, const Fraction &b);

private:
  int m_numerator{};
  int m_denominator{};
};

Fraction operator*(const Fraction &a, const Fraction &b) {
  return Fraction{a.m_numerator * b.m_numerator,
                  a.m_denominator * b.m_denominator};
}

Fraction operator*(const Fraction &a, int b) {
  return Fraction{a.m_numerator * b, a.m_denominator};
}

Fraction operator*(int a, const Fraction &b) { return b * a; }

int main() {
  Fraction f1{2, 5};
  f1.print();

  Fraction f2{3, 8};
  f2.print();

  Fraction f3{f1 * f2};
  f3.reduce()->print();

  Fraction f4{f1 * 2};
  f4.print();

  Fraction f5{2 * f2};
  f5.print();

  Fraction f6{Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4}};
  f6.print();

  return 0;
}
