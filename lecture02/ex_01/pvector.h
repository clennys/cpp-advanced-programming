#ifndef PVECTOR_H_
#define PVECTOR_H_

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

template <typename T> class pvector {
  string filename;
  vector<T> v;
  void readvector() {
    ifstream ifs(filename);
    for (;;) {
      T x;
      ifs >> x;
      if (!ifs.good())
        break;
      v.push_back(x);
    }
  }
  void writevector() {
    ofstream ofs(filename);
    for (const T &elem : v)
      ofs << elem << endl;
  }

public:
  pvector(string fname) : filename(fname) {
    cout << "Read data..." << endl;
    readvector();
  }
  ~pvector() {
    cout << "Write data ... " << endl;
    writevector();
  }
  void push_back(const T &el) { v.push_back(el); }
  T back() { return v[v.size() - 1]; }
  void pop_back() { v.pop_back(); }
  T get_item(int pos) { return v[pos]; }
  int size() { return v.size(); }
  T operator[](int index) {
    if (index >= v.size()) {
      cout << "Array index out of bound, exiting";
      exit(0);
    }
    return v[index];
  }
  void write() { writevector(); }
  pvector(const pvector<T> &) = delete;
};

#endif // !PVECTOR_H_
