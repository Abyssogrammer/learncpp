#include <fstream>
#include <iostream>
int main() {
  std::ofstream fout{"out.txt"};
  if (!fout) {
    std::cerr << "Couldn't open file\n";
    return 1;
  }
  fout << "Hello world\n";
  fout << "This is the beginning of something beautiful\n";
  return 0;
}
