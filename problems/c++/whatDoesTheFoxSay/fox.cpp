/*
  https://open.kattis.com/problems/whatdoesthefoxsay
*/

#include <iostream>
#include <vector>
#include <regex>

int main() {
  int testCount;
  std::cin >> testCount;
  std::cin.ignore(); // This needs to be done to clear left stuff in the line so getline later works properly

  std::vector<std::string> testCases;

  // Get all testcases and store in the vector
  for (int i = 0; i < testCount; i++) {
    std::string testCase;
    std::getline(std::cin, testCase);
    testCases.push_back(testCase);
  }

  bool continueReading = true;
  std::vector<std::string> animalSounds;

  // start input loop
  while (continueReading) {
    std::string input;
    std::getline(std::cin, input);

    // for each loop check if its the last entry by comparing to what the last entry should look like
    if (input == "what does the fox say?") {
      for (std::size_t i = 0; i < testCases.size(); i++) {
        std::string currentCase = testCases[i];
        for (std::size_t j = 0; j < animalSounds.size(); j++) {
          currentCase = std::regex_replace(currentCase, std::regex("\\" + animalSounds[j]), "");
          std::cout << "Case: " << currentCase << '\n';
        }
      }
      continueReading = false;
    } else {
      // parse out animal noises and assign them in a vector
      std::string parsedInput = std::regex_replace(input, std::regex("[^ ]* [^ ]* "), "");
      animalSounds.push_back(parsedInput);
    }
  }
  return 0;
}
