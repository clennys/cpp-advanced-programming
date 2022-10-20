#include "pvector.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  if (argv[1] == NULL) {
    cout << "Provide a pvector file." << endl;
    return 1;
  }

  string filename = argv[1];

  // pvector<int> pvec(filename);
  pvector<string> pvec_str(filename);

  pvec_str.push_back("Dini Muetter");
  pvec_str.pop_back();

  // pvec.push_back(28);

  return 0;
}
