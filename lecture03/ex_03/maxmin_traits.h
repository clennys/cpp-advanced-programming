#ifndef MAXMIN_TRAITS_H_
#define MAXMIN_TRAITS_H_

#include <complex>

using namespace std;

template <typename T> class maxmin_traits {
public:
  static T min(T a, T b) { return a < b ? a : b; }
  static T max(T a, T b) { return a > b ? a : b; }
};

template <typename T> class maxmin_traits<complex<T>> {
public:
  static complex<T> min(complex<T> a, complex<T> b) {
    return norm(a) < norm(b) ? a : b;
  }
  static complex<T> max(complex<T> a, complex<T> b) {
    return norm(a) > norm(b) ? a : b;
  }
};

#endif // !MAXMIN_TRAITS_H_
