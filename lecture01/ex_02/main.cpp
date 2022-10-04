#include "fraction.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  fraction a, b;
  cout << "Enter first fraction: (a/b)" << endl;
  cin >> a;
  cout << "Enter second fraction: (c/d)" << endl;
  cin >> b;

  cout << "Input:" << a << " " << b << endl;

  cout << "Multpl:" << a * b << endl;
  cout << "Div:" << a / b << endl;
  cout << "Add:" << a + b << endl;
  cout << "Sub:" << a - b << endl;

  return 0;
}
