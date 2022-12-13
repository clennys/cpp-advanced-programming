#include "../include/pvector.h"
#include <iostream>

template <typename T> void print(const pvector<T> &pvec) {

  for (const T &i : pvec) {
    cout << i << endl;
  }
}

void pvector_int() {

  pvector<int> pvec("integers.txt");

  print(pvec);

  int i;
  cout << "add integer to vector: ";
  cin >> i;
  pvec.push_back(i);

  print(pvec);
}

void pvector_string() {

  pvector<string> pvec("string.txt");

  print(pvec);

  string s;
  cout << "add string to vector: ";
  getline(cin, s); // ignore \n
  getline(cin, s);
  pvec.push_back(s);

  print(pvec);
}

int main() {
  pvector_int();
  pvector_string();
}
