#include <iostream>
#include <string>
class Ball {
public:
  Ball(const std::string &color, double radius)
      : m_color{color}, m_radius{radius} {}

  const std::string &color() const { return m_color; }

  double radius() const { return m_radius; }

private:
  std::string m_color{};
  double m_radius{};
};

void print(Ball ball) {
  std::cout << "Ball(" << ball.color() << ", " << ball.radius() << ")\n";
}

int main() {
  Ball blue{"blue", 10.0};
  print(blue);

  Ball red{"red", 12.0};
  print(red);

  return 0;
}
