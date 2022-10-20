#include "../../lecture01/ex_02/fraction.h"
#include "rpn.h"
#include <iostream>
#include <stack>

int main(int argc, char *argv[]) {
  char c;
  string input;
  pvector<int> pvec(argv[1]);
  rpn<int> rpn(pvec);

  cout << "Welcome, this is a RPN Calculator!" << endl;
  while (true) {
    cout << "Command: ";
    getline(cin, input);
    rpn.parse_input(input);
    rpn.print_vector();
  }
  return 0;
}
