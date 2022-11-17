#ifndef MERGER_TRAITS_H
#define MERGER_TRAITS_H

#include <forward_list>

using namespace std;

template <typename T, typename U> struct merger_traits {

  static void merge(T &target_container, U element) {
    target_container.insert(target_container.end(), element);
  }
};

template <typename T> struct merger_traits<forward_list<T>, T> {

  static void merge(forward_list<T> &flist, T t) { flist.push_front(t); }
};

#endif // !MERGER_TRAITS_H
