#ifndef MERGER_H_
#define MERGER_H_

#include <iostream>
#include <map>

using namespace std;

#include "merger_traits.h"

template <typename T> void print(const T &container) {
  for (auto element : container) {
    cout << element << " ";
  }
  cout << endl;
}

template <typename T> void print(const map<T, T> &container) {
  for (auto element : container) {
    cout << element.first << ":" << element.second << " ";
  }
  cout << endl;
}

template <typename V, typename T, typename U, typename M = merger_traits<T, V>>
T merger(T target_container, U merge_container) {
  for (V element : merge_container) {
    M::merge(target_container, element);
  }
  return target_container;
}

#endif // !MERGER_H_
