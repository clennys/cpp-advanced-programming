#include "../include/spellchecker.h"

spellchecker::spellchecker(string &dict, string &text) : dict(dict), fs(text) {
  read();
  check();
}

void spellchecker::read() {
  char c;
  string input;
  while (true) {
    fs.get(c);
    if (!fs.good())
      break;
    if (c == '\n' || c == ' ' || c == '\t') {
      non_checked.push_back(input);
      input = "";
    }
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
      input.push_back(c);
  }
}

void spellchecker::check() {
  for (auto word : non_checked) {
    if (dict.count(word) == 0 && ignore.count(word) == 0) {
      char c;
      cout << "found misspelled word: " << word << endl;
      cout << "add, ignore or correct? [a,i,c]: ";
      cin >> c;

      switch (c) {
      case 'a': {
        dict.insert(word);
        break;
      }
      case 'i': {
        dict.insert(word);
        break;
      }
      case 'c': {
        string new_word;
        cout << "Insert new word: ";
        cin >> new_word;
        cout << "corrected " << word << " with " << new_word << endl;
        word = new_word;
        break;
      }
      default:
        cout << "try again" << endl;
        continue;
      }
    }
  }
}
