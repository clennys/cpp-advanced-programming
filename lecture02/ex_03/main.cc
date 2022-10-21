#include "../../lecture01/ex_02/fraction.h"
#include "rpn.h"
#include <iostream>
#include <stack>

template <typename T> void run(T &calc) {
  char c;
  string input;

  cout << "Welcome, this is a RPN Calculator!" << endl;
  calc.print_vector();
  while (true) {
    cout << "Command: ";
    getline(cin, input);
    calc.parse_input(input);
    calc.print_vector();
  }
}

int main(int argc, char *argv[]) {

  if (argc == 3) {
    string argv1(argv[1]);
    if (argv1 == "int") {
      rpn<int> calc(argv[2]);
      run(calc);
    } else if (argv1 == "double") {
      rpn<double> calc(argv[2]);
      run(calc);
    } else if (argv1 == "fraction") {
      rpn<fraction> calc(argv[2]);
      run(calc);
    } else {
      cout << argv1 << " is not a valid type." << endl;
      exit(1);
    }
  } else {
    cout << "You didn't provide enough arguments." << endl;
    exit(1);
  }

  return 0;
}
