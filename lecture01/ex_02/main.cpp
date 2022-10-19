#include "fraction.h"
#include <assert.h>
#include <iostream>

using namespace std;

void test_driver() {
  fraction test_a = fraction(1, 17);
  fraction test_b = fraction(69, 420);
  fraction test_c = fraction(11, 38);
  fraction test_d = fraction(9, 90);
  fraction test_e = fraction(38, 11);

  cout << "Running Tests ..." << endl;
  assert(test_a * test_d == fraction(1, 170));
  assert(test_b / test_c == fraction(437, 770));
  assert(test_d + test_b == fraction(37, 140));
  assert(test_a - test_c == fraction(-149, 646));

  assert(test_d * test_b == fraction(23, 1400));
  assert(test_a / test_c == fraction(38, 187));
  assert(test_c + test_d == fraction(37, 95));
  assert(test_b - test_a == fraction(251, 2380));

  assert(test_c * test_e == fraction(1, 1));
  cout << "Done" << endl;
}

int main(int argc, char *argv[]) {
  test_driver();
  fraction a, b;
  string o;

  while (true) {
    cout << "Enter fraction operation:" << endl;
    if (!(cin >> a >> o >> b)) {
      cout << "Not a valid input!" << endl;
      cin.clear();
      cin.ignore(10000, '\n');
      continue;
    }

    if (o == "*")
      cout << a << " " << o << " " << b << " = " << a * b << endl;
    else if (o == "/")
      cout << a << " " << o << " " << b << " = " << a / b << endl;
    else if (o == "+")
      cout << a << " " << o << " " << b << " = " << a + b << endl;
    else if (o == "-")
      cout << a << " " << o << " " << b << " = " << a - b << endl;
    else
      cout << "Invalid Operator!";
  }

  return 0;
}
