#ifndef PVECTOR_H_

#include "ptraits.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T, typename P = ptraits<T>>
class pvector : public vector<T> {
  string f;

  void read() {
    ifstream ifs(f);
    while (true) {
      T input;
      P::read(ifs, input);
      if (!ifs.good())
        break;
      vector<T>::push_back(input);
    }
  }

  void write() {
    ofstream ofs(f);
    for (const T &t : *this) {
      P::write(ofs, t);
    }
  }

public:
  pvector(string file) : f(file) { read(); }
  ~pvector() { write(); }
};

#endif // !PVECTOR_H_
