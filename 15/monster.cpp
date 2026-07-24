#include <string>
#include <string_view>

class Monster {
public:
  enum Type {
    dragon,
    goblin,
    ogre,
    orc,
    skeleton,
    troll,
    vampire,
    zombie,
    maxMonsterType
  };
  explicit Monster(Type type, std::string_view name, std::string_view roar,
                   int hp)
      : m_type{type}, m_name{name}, m_roar{roar}, m_hp{hp} {};

private:
  Type m_type{};
  std::string m_name{"???"};
  std::string m_roar{"???"};
  int m_hp{};
};

namespace MonsterGenerator {
Monster generate() {
  return Monster{Monster::skeleton, "Bones", "*rattle*", 4};
}
} // namespace MonsterGenerator

int main() {
  Monster m{MonsterGenerator::generate()};
  return 0;
}
