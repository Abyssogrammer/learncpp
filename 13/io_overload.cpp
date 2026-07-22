
#include <iostream>
#include <string>
#include <string_view>
namespace Monster {
enum MonsterType {
  unknown,
  orc,
  goblin,
  troll,
  ogre,
  skeleton,
};
}

constexpr std::string_view getMosterName(Monster::MonsterType monster) {
  switch (monster) {
  case Monster::orc:
    return "Orc";
  case Monster::goblin:
    return "Goblin";
  case Monster::troll:
    return "Troll";
  case Monster::ogre:
    return "Ogre";
  case Monster::skeleton:
    return "Spooky scary skeleton";
  default:
    return "Unknown";
  }
}

constexpr Monster::MonsterType
getMonsterFromString(std::string_view mosterName) {
  if (mosterName == "orc") {
    return Monster::orc;
  }
  if (mosterName == "goblin") {
    return Monster::goblin;
  }
  if (mosterName == "troll") {
    return Monster::troll;
  }
  if (mosterName == "ogre") {
    return Monster::ogre;
  }
  if (mosterName == "skeleton") {
    return Monster::skeleton;
  }
  return Monster::unknown;
}

std::ostream &operator<<(std::ostream &out, Monster::MonsterType moster) {
  out << getMosterName(moster);
  return out;
}

std::istream &operator>>(std::istream &in, Monster::MonsterType &monster) {
  std::string monsterName{};
  in >> monsterName;
  monster = getMonsterFromString(monsterName);
  return in;
}

int main() {
  Monster::MonsterType monster{};
  std::cout << "Enter a monster name: ";
  std::cin >> monster;
  std::cout << "You chose: " << monster << "\n";
  // std::cout << static_cast<Monster::MonsterType>(12)
  //          << "\n"; // Don't use -Werror
  return 0;
}
