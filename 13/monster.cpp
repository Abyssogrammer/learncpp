#include <iostream>

namespace Monster {
enum MonsterType {
  orc,
  goblin,
  troll,
  ogre,
  skeleton,
};
}

int main() {
  Monster::MonsterType o{Monster::goblin};
  std::cout << o << "\n";

  return 0;
}
