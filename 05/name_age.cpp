#include <iostream>
#include <string>
int main(int, char **) {
  std::cout << "Enter your name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);
  std::cout << "Enter your age too: ";
  int age{};
  std::cin >> age;
  std::cout << "You name length is: " << name.length() << "\n";
  std::cout << "Your name length + age is: "
            << static_cast<int>(name.length()) + age << "\n";
  return 0;
}
