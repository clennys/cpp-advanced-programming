#include "../../../lecture03/ex_02/include/pset.h"
#include "../../../lecture03/ex_02/include/pvector.h"
#include <iostream>
#include <regex>

using namespace std;

void regex_spellchecker(string file, string dict) {
  pset<string> d(dict);
  pvector<string> f(file);

  for (auto l : f) {
    regex rw("\\w+");

    auto words_begin =
        sregex_iterator(l.begin(), l.end(), rw); // string regex iterator
    auto words_end = sregex_iterator();

    for (sregex_iterator i = words_begin; i != words_end; ++i) {
      smatch match = *i;
      string match_str = match.str();

      for (auto &el : d) {
        regex match_dict(el);
        if (regex_match(match_str, match_dict)) {
          cout << "Found " << match_str << " in dictionary" << endl;
          break;
        }
      }
    }
  }
}

int main(int argc, char *argv[]) {
  if (argc == 3) {
    string file(argv[1]);
    string dict(argv[2]);
    regex_spellchecker(file, dict);
  }
  return 0;
}
