#include <fstream>
#include <ios>
#include <iostream>
#include <string>

int main() {
  std::ifstream fin{"out.txt"};
  if (!fin) {
    std::cerr << "Couldn't open file\n";
    return 1;
  }
  std::string str{};
  while (std::getline(fin, str)) {
    std::cout << str << "\n";
  }

  std::cout << std::boolalpha << fin.is_open();
  return 0;
}
