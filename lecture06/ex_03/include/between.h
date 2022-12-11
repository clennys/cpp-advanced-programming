#ifndef BETWEEN_H_
#define BETWEEN_H_

#include <iostream>
#include <iterator>
using namespace std;

template <typename Iter>
using iter_category = typename std::iterator_traits<Iter>::iterator_category;

template <typename Iter>
using has_random_access_iter =
    is_base_of<random_access_iterator_tag, iter_category<Iter>>;

template <typename Iter>
typename enable_if<has_random_access_iter<Iter>::value, bool>::type
between(Iter fst, Iter lst, Iter i) {
  cout << "random_access_iterator_tag used ..." << endl;
  return fst <= i && i <= lst;
}

template <typename Iter>
typename enable_if<!has_random_access_iter<Iter>::value, bool>::type
between(Iter fst, Iter lst, Iter i) {
  cout << "forward_iterator_tag used ..." << endl;
  while (fst != lst) {
    if (fst == i) {
      return true;
    }
    ++fst;
  }
  return false;
}

#endif // !BETWEEN_H_
