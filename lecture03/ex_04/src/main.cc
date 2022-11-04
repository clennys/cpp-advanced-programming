#include <iostream>

using namespace std;

#include "iostream"

#include "../include/spellchecker.h"

using namespace std;

int main(int argc, char *argv[]) {

  if (argc < 3) {
    cout << "Wrong Input" << endl;
    return 1;
  }

  string dictionary = argv[1];
  string text = argv[2];
  spellchecker sc(dictionary, text);
  return 0;
}
