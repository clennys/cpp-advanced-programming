#ifndef BETWEEN_H_
#define BETWEEN_H_

#include <iostream>
#include <iterator>
using namespace std;

template <typename Iter>
bool between_iterator_tag(Iter fst, Iter lst, Iter i,
                          random_access_iterator_tag) {
  cout << "random_access_iterator_tag used ..." << endl;
  return fst <= i && i <= lst;
}

template <typename Iter>
bool between_iterator_tag(Iter fst, Iter lst, Iter i, forward_iterator_tag) {
  cout << "forward_iterator_tag used ..." << endl;
  while (fst != lst) {
    if (fst == i) {
      return true;
    }
    ++fst;
  }
  return false;
}

template <typename Iter> bool between(Iter fst, Iter lst, Iter i) {
  typedef typename std::iterator_traits<Iter>::iterator_category category;
  return between_iterator_tag(fst, lst, i, category());
}
#endif // !BETWEEN_H_
