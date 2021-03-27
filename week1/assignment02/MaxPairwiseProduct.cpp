//
// Created by 0xdec0ded on 3/26/21.
//

#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
  int n = numbers.size();
  int highest = 0, next_highest = 0;

  for (int first = 0; first < n; ++first) {
    int number = numbers[first];

    if (number > highest) {
      next_highest = highest;
      highest = number;
      continue;
    }

    if (number > next_highest) {
      next_highest = number;
    }
  }

  return (long long)highest * next_highest;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> numbers(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> numbers[i];
  }

  std::cout << MaxPairwiseProduct(numbers) << "\n";
  return 0;
}
