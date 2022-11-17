#include <iostream>
#include <iterator>
#include <list>
#include <vector>

#include "../include/between.h"

using namespace std;

template <typename Iter> void print(Iter fst, Iter lst, Iter i) {
  if (between(fst, lst, i)) {
    cout << "Iterator WAS in between first und last." << endl;
  } else {
    cout << "Iterator WAS NOT in between first und last." << endl;
  }
}

int main() {

  vector<int> v = {1, 2, 3, 4, 5};

  // Random access iterator
  cout << "With Random access iterator." << endl;
  vector<int>::iterator fst = v.begin();
  auto lst = v.end();
  auto i = next(fst, 2);
  print(fst, lst, i);

  auto fst0 = next(fst, 3);
  print(fst0, lst, i);

  // not random iterator
  //
  cout << endl << "With forward iterator." << endl;
  list<int> l = {1, 2, 3, 4, 5};

  auto lfst = l.begin();
  auto llst = l.end();
  auto li = next(lfst, 2);
  print(lfst, llst, li);

  auto lfist0 = next(lfst, 3);
  print(lfist0, llst, li);

  return 0;
}
