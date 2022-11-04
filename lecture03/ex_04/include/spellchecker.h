#ifndef SPELLCHECKER_H_
#define SPELLCHECKER_H_

#include <fstream>
#include <set>
#include <string>

#include "../../ex_02/include/pset.h"
#include "../../ex_02/include/pvector.h"

using namespace std;

class spellchecker {

  pset<string> dict;
  set<string> ignore;
  ifstream fs;
  vector<string> non_checked;

public:
  spellchecker(string &dict, string &text);

  void read();
  void check();
};

#endif // SPELLCHECKER_H_
