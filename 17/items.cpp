#include <array>
#include <string>
#include <string_view>

class Item {
public:
  Item(std::string_view name, int gold) : m_name{name}, m_gold{gold} {}

private:
  std::string m_name{};
  int m_gold{};
};

int main() {
  std::array<Item, 3> arr{{{"Shit", 0}, {"Rubbish", 1}, {"Sword", 100000}}};
  return 0;
}
