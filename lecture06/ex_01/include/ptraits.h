#ifndef PTRAITS_H_
#define PTRAITS_H_

#include "fstream"
#include "string"
#include <iostream>

using namespace std;
template <typename T> struct ptraits {

  static void read(ifstream &ifs, T &elem) { ifs >> elem; }

  static void write(ofstream &ofs, const T &elem) {
    if (ofs.is_open()) {
      ofs << elem << endl;
    } else
      cout << "no file" << endl;
  }
};

template <> struct ptraits<string> {

  static void read(ifstream &ifs, string &elem) { getline(ifs, elem); }

  static void write(ofstream &ofs, const string &elem) { ofs << elem << endl; }
};
#endif // !PTRAITS_H_
