/*
  https://open.kattis.com/problems/trik
*/
#include <iostream>

int main() {
  std::string instructions;
  std::cin >> instructions;

  int currentLocation = 0; // 0:left 1:middle 2:right

  for (char& c : instructions) {
    switch (c) {
      case 'A':
        if (currentLocation == 0) {
          currentLocation = 1;
        } else if (currentLocation == 1) {
          currentLocation = 0;
        }
        break;
      case 'B':
        if (currentLocation == 1) {
          currentLocation = 2;
        } else if (currentLocation == 2) {
          currentLocation = 1;
        }
        break;
      case 'C':
        if (currentLocation == 0) {
          currentLocation = 2;
        } else if (currentLocation == 2) {
          currentLocation = 0;
        }
        break;
    }
  }

  // add one to final output for kattis
  std::cout << currentLocation + 1 << '\n';

  return 0;
}
