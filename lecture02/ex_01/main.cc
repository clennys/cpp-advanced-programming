#include "../../lecture01/ex_02/fraction.h"
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
  // pvec.push_back(28);

  pvector<string> pvec_str(filename);
  pvec_str.push_back("YOU Dennys \n hut");

  // pvector<fraction> pvec_frac(filename);
  // pvec_frac.push_back(fraction(12, 37));

  return 0;
}
