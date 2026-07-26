#include <algorithm>
#include <iostream>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

struct Student {
  std::string name{};
  char grade{};
};

class GradeMap {
private:
  std::vector<Student> m_map{};

public:
  char &operator[](const std::string_view x) {
    auto res{std::find_if(m_map.begin(), m_map.end(),
                          [x](const Student &curr) { return curr.name == x; })};
    if (res != m_map.end())
      return res->grade;
    m_map.emplace_back(Student{static_cast<std::string>(x), 0});
    return m_map.back().grade;
  }
};

int main() {
  GradeMap grades{};

  grades["Joe"] = 'A';
  grades["Frank"] = 'B';

  std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
  std::cout << "Frank has a grade of " << grades["Frank"] << '\n';

  return 0;
}
