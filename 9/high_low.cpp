#include <cstdlib>
#include <iostream>
#include <limits>
#include <string_view>

constexpr int minValue{1};
constexpr int maxValue{100};
constexpr int initValue{0};
static int seed{15};

// This is shit, don't use it
int getRandNum(int low, int high) {
  static int mult{};
  mult += seed;
  mult *= seed;
  return abs((mult % high) + low);
}

void ignoreLine() {
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getIntInput(std::string_view msg, int min, int max) {
  int inp{};
  while (true) {
    std::cout << msg;
    std::cin >> inp;
    if (!std::cin) { // Extraction failed
      std::cin.clear();
      ignoreLine();
      continue;
    }
    if (!std::cin.eof() && std::cin.peek() != '\n') { // Extranious input
      ignoreLine();
      continue;
    }
    if (inp > max || inp < min) { // Invalid input
      ignoreLine();
      continue;
    }
    return inp;
  }
}

int main() {
  int num{getRandNum(minValue, maxValue)};
  int guess{initValue};
  do {
    if (guess == initValue) {
      guess =
          getIntInput("Enter a number between 1 and 100: ", minValue, maxValue);
    } else if (guess < num) {
      guess = getIntInput("Try higher: ", minValue, maxValue);
    } else {
      guess = getIntInput("Try lower: ", minValue, maxValue);
    }
  } while (num != guess);
  std::cout << "Nice!\n";
  return 0;
}
