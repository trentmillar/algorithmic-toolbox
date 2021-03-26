//
// Created by 0xdec0ded on 3/25/21.
//

#include <iostream>

unsigned int sum(unsigned int augend, unsigned int addend) {
  return augend + addend;
}

int main() {
  unsigned int a, b;
  std::cin >> a;
  std::cin >> b;
  std::cout << sum(a, b);
  return 0;
}