#ifndef MERGER_H_
#define MERGER_H_

#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

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

template <typename T, typename U>
T merger(T target_container, U merge_container) {
  T result;
  merge(target_container.begin(), target_container.end(),
        merge_container.begin(), merge_container.end(), back_inserter(result));
  return result;
}

#endif // !MERGER_H_
