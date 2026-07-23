#include <iomanip>
#include <iostream>
int main(int, char **) {
  const double GRAVITY{9.8};
  std::cout << "Enter the height in meters: ";
  double height{};
  std::cin >> height;
  double curr_height{height};
  for (int i = 0; i <= 5; i++) {
    std::cout << "At " << i << " seconds, ";
    curr_height = height - GRAVITY * (i * i) / 2;
    if (curr_height <= 0)
      std::cout << "the ball is on the ground.\n";
    else
      std::cout << "the ball is at " << std::setw(5) << curr_height
                << " meters\n";
  }
  return 0;
}
