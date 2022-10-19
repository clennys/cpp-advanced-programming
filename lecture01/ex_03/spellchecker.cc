#include <fstream>
#include <iostream>
#include <set>
#include<algorithm>

/*
 Simple Spell Checker
 ------------------------
        Implement a simple spell checker. The spell checker takes two files
        as command line arguments, a dictionary file containing a list of
        correctly spelled words and a file whose content is to be checked.
        Upon startup, your program stores the words contained in the
        dictionary file in a set<string>. Then it reads every word in the file
        to spell check, checks whether each word is correctly spelled (i.e.,
        contained in the dictionary file), and if not displays it on cout.
*/

using namespace std;
void strip_punctuation(string& s){
	char trim[] = {'.',',',':',';','!','?'};
	for (const char &c : trim) {
		s.erase(remove(s.begin(), s.end(), c), s.end());
	}
}

int main(int argc, char *argv[]) {
  if (argv[1] == NULL || argv[2] == NULL) {
    cout << "Invalid Input: Please provide a to_be_checked.txt and a "
            "dictionary.txt file!"
         << endl;
  }

  ifstream ifs_input(argv[1]);
  ifstream ifs_dict(argv[2]);

	string s;
	set<string> dict;

	while(ifs_dict >> s){
		dict.insert(s);
	}

	while (ifs_input >> s) {
		strip_punctuation(s);
		bool is_in = dict.find(s) != dict.end();
		if (!is_in) {
			cout << "Spelling Mistake: " << s << endl;
		}
	}

  return 0;
}
