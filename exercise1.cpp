#include <iostream>

//Exercise 1: ReverseWord
//https://repl.it/join/krcksohu-bhupindersd
//https://repl.it/@BhupinderSD/ReverseWord

int main() {
  std::string word;
  std::string reversedWord;

  std::cout << "Please enter a word: ";
  getline(std::cin, word);

  for (int i = word.length() - 1; i >= 0; i--) { //visit every character in the word from the back
    reversedWord.push_back(word.at(i)); //append the character to new string
  }

  std::cout << word << " spelt backwards is: " << reversedWord << std::endl;

  return 0;
}
