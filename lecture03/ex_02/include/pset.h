#ifndef PSET_H_
#define PSET_H_

#include "ptraits.h"
#include <fstream>
#include <iostream>
#include <set>
#include <string>

using namespace std;

template <typename T, typename P = ptraits<T>> class pset : public set<T> {
  string f;

  void read() {
    ifstream ifs(f);
    while (true) {
      T input;
      P::read(ifs, input);
      if (!ifs.good())
        break;
      set<T>::insert(input);
    }
  }

  void write() {
    ofstream ofs(f);
    for (const T &t : *this) {
      P::write(ofs, t);
    }
  }

public:
  pset(string file) : f(file) { read(); }
  ~pset() { write(); }
};

#endif // !PSET_H_
