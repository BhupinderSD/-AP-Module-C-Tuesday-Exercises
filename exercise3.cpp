#include <iostream>

//Exercise 3: Palindrome Checker
//https://repl.it/join/trdafjbg-bhupindersd
//https://repl.it/@BhupinderSD/Palindrome-Checker

std::string getWordLowerCase(std::string word) {
  std::string lowerCaseWord;

  for (int i = 0; i < word.length(); i++) { //go through every character in the word
    char lowerCaseCharacter = tolower(word.at(i)); //make the character lower case
    lowerCaseWord.push_back(lowerCaseCharacter); //append the character to the new word
  }

  return lowerCaseWord;
}

std::string getReversedWord(std::string word) {
  std::string reversedWord;

  for (int i = word.length() - 1; i >= 0; i--) { //visit every character in the word from the back
    reversedWord.push_back(word.at(i)); //append the character to the new string
  }

  return reversedWord;
}

int main() {
  std::string word;
  std::string lowerCaseWord;
  std::string reversedlowerCaseWord;

  std::cout << "Please enter a word: ";
  getline(std::cin, word);

  lowerCaseWord = getWordLowerCase(word);
  reversedlowerCaseWord = getReversedWord(lowerCaseWord);

  if (lowerCaseWord == reversedlowerCaseWord) { //check if the word is the same as the word reversed, both lower case
    std::cout << "Yes, \'" << word << "\' is a palindrome\n";
  } else {
    std::cout << "Sorry, \'" << word << "\' is not a palindrome.\n";
  }

  return 0;
}
