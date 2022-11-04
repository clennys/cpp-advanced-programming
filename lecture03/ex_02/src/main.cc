#include "../include/fraction.h"
#include "../include/pset.h"
#include "../include/pvector.h"
#include <iostream>

void pvector_int() {

  pvector<int> pvec("integers.txt");

  for (const int &i : pvec) {
    cout << i << endl;
  }

  int i;
  cout << "add integer to vector: ";
  cin >> i;
  pvec.push_back(i);
}

void pvector_string() {

  pvector<string> pvec("string.txt");

  for (const string &s : pvec) {
    cout << s << endl;
  }

  string s;
  cout << "add string to vector: ";
  getline(cin, s); // ignore \n
  getline(cin, s);
  pvec.push_back(s);
}

void pset_int() {

  pset<int> pset("pset.txt");

  for (const int &i : pset) {
    cout << i << endl;
  }

  int i;
  cout << "add integer to set: ";
  cin >> i;
  pset.insert(i);
}

int main() {

  pvector_int();
  cout << "==================" << endl;
  pvector_string();
  cout << "==================" << endl;
  pset_int();
}
