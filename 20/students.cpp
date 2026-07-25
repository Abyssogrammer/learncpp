#include <algorithm>
#include <array>
#include <iostream>
#include <string>

struct Student {
  std::string name{};
  int score{};
};

int main() {
  std::array<Student, 8> arr{{{"Albert", 3},
                              {"Ben", 5},
                              {"Christine", 2},
                              {"Dan", 8},
                              {"Enchilada", 4},
                              {"Francis", 1},
                              {"Greg", 3},
                              {"Hagrid", 5}}};

  Student *bestStudent{std::max_element(
      arr.begin(), arr.end(),
      [](const Student &a, const Student &b) { return a.score < b.score; })};
  std::cout << bestStudent->name << "\n";
  return 0;
}
