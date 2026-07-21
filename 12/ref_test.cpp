#include <iostream>
int main() {
  int x{420};
  int y{69};
  int &ref{x};
  int &ref2{y};
  ref = ref2;
  std::cout << ref << "\n";
  return 0;
}
