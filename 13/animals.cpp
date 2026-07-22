#include <iostream>
#include <string_view>
enum class Animal {
  pig,
  chicken,
  goat,
  cat,
  dog,
  duck,
};

std::string_view getAnimalName(Animal animal) {
  switch (animal) {
  case Animal::pig:
    return "Pig";
  case Animal::chicken:
    return "Chicken";
  case Animal::cat:
    return "Nekochan";
  case Animal::goat:
    return "Goad";
  case Animal::dog:
    return "Inusan";
  case Animal::duck:
    return "Duck";
  default:
    return "Unknown";
  }
}

void printNumberOfLegs(Animal animal) {
  int legCount{};
  switch (animal) {
  case Animal::pig:
  case Animal::cat:
  case Animal::dog:
  case Animal::goat:
    legCount = 4;
    break;
  case Animal::duck:
  case Animal::chicken:
    std::cout << "That is not in the list\n";
    return;
  }
  std::cout << getAnimalName(animal) << " has " << legCount << " legs.\n";
}

int main() {
  printNumberOfLegs(Animal::dog);
  return 0;
}
