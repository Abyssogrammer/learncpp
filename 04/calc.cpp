#include <iostream>
int main(int, char **) {
  std::cout << "Enter a number: ";
  double num1{};
  std::cin >> num1;
  std::cout << "Enter another number: ";
  double num2{};
  std::cin >> num2;
  std::cout << "Choose one of +, -, /, *: ";
  char op{};
  std::cin >> op;
  double res{};
  if (op == '+') {
    res = num1 + num2;
  } else if (op == '-') {
    res = num1 - num2;
  } else if (op == '/') {
    res = num1 / num2;
  } else if (op == '*') {
    res = num1 * num2;
  } else {
    std::cout << "Get that outta here\n";
    return 0;
  }
  std::cout << num1 << " " << op << " " << num2 << " = " << res << "\n";
  return 0;
}
