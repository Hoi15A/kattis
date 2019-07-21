/*
  https://open.kattis.com/problems/nastyhacks
*/

#include <iostream>

int main() {
  int count;
  std::cin >> count;

  for (int i = 0; i < count; i++) {
    int r, e, c;
    std::cin >> r >> e >> c;
    if (r < e - c) {
      std::cout << "advertise" << '\n';
    } else if (r > e - c) {
      std::cout << "do not advertise" << '\n';
    } else {
      std::cout << "does not matter" << '\n';
    }
  }

  return 0;
}
