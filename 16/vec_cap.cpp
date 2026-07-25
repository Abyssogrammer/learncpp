#include <iostream>
#include <vector>
int main() {
  std::vector<int> x(5);
  std::cout << "Size: " << x.size() << " Capacity: " << x.capacity() << "\n";
  x.resize(10);
  std::cout << "Size: " << x.size() << " Capacity: " << x.capacity() << "\n";
  x.resize(0);
  std::cout << "Size: " << x.size() << " Capacity: " << x.capacity() << "\n";
  x.reserve(100);
  std::cout << "Size: " << x.size() << " Capacity: " << x.capacity() << "\n";
  return 0;
}
