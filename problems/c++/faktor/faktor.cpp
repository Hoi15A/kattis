/*
  https://open.kattis.com/problems/faktor
*/
#include <iostream>

int main() {
  int p, i;
  std::cin >> p >> i;
  std::cout << p * (i - 1) + 1 << '\n';

  return 0;
}
