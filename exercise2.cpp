#include <iostream>

//Exercise 2: LowerCase Converter
//https://repl.it/join/nqcftgbx-bhupindersd
//https://repl.it/@BhupinderSD/LowerCase-Converter

std::string getWordLowerCase(std::string word) {
  std::string lowerCaseWord;

  for (int i = 0; i < word.length(); i++) { //go through every character in the word
    char lowerCaseCharacter = tolower(word.at(i)); //make the character lower case
    lowerCaseWord.push_back(lowerCaseCharacter); //append the character to the new word
  }

  return lowerCaseWord;
}

int main() {
  std::string word;

  std::cout << "Please enter a word: ";
  getline(std::cin, word);

  std::cout << word << " converted to lower case is: " << getWordLowerCase(word) << std::endl;

  return 0;
}
