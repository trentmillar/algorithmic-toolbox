//
// Created by 0xdec0ded on 3/25/21.
//

#include <iostream>

int sum(int a, int b) {
  return a + b;
}

int main() {
  int a, b;
  std::cin >> a;
  std::cin >> b;
  std::cout << sum(a, b);
  return 0;
}