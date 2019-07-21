/*
  https://open.kattis.com/problems/dicecup
*/
#include <iostream>

int main() {
  size_t inOne, inTwo;
  std::cin >> inOne >> inTwo;

  size_t dieOne = inOne;
  size_t dieTwo = inTwo;

  if (inOne > inTwo) {
    dieOne = inTwo;
    dieTwo = inOne;
  }

  for (size_t i = dieOne; i <= dieTwo; i++) {
    std::cout << i + 1 << '\n';
  }

  return 0;
}
