#ifndef PVECTOR_H_

#include "flocker.h"
#include "ptraits.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T, typename P = ptraits<T>>
class pvector : public vector<T> {
  flocker f;

  void read() {
    cout << "Reading file ..." << endl;
    ifstream ifs(f.get_file_name());
    while (true) {
      T input;
      P::read(ifs, input);
      if (!ifs.good())
        break;
      vector<T>::push_back(input);
    }
  }

  void write() {
    cout << "Writing file ..." << endl;
    ofstream ofs(f.get_file_name());
    for (const T &t : *this) {
      P::write(ofs, t);
    }
  }

public:
  pvector(string file) : f(file) { read(); }
  ~pvector() { write(); }
};

#endif // !PVECTOR_H_
