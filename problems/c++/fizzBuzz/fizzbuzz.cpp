/*
  https://open.kattis.com/problems/fizzbuzz
*/

#include <iostream>

int main() {
  int fizz, buzz, count;
  std::cin >> fizz >> buzz >> count;

  for (int i = 1; i <= count; i++) {
    std::string result;
    result = "";
    if (i % fizz == 0) {
      result += "Fizz";
    }
    if (i % buzz == 0) {
      result += "Buzz";
    }
    if (result == "") {
      result = std::to_string(i);
    }
    std::cout << result << '\n';
  }
  return 0;
}
