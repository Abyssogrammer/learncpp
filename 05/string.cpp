#include <iostream>
#include <string>
int main(int, char **) {
  std::cout << "Enter your name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);
  std::cout << "Enter your favorite game: ";
  std::string game{};
  std::getline(std::cin >> std::ws, game);
  std::cout << "So let me get this straight, you are " << name
            << " and you like " << game << "?!!!\n";
  return 0;
}
