#ifndef FIBONACCI_H_
#define FIBONACCI_H_

template <int N> struct fibonacci {
  static const int val = fibonacci<N - 1>::val + fibonacci<N - 2>::val;
};

template <> struct fibonacci<1> {
  static const int val = 1;
};

template <> struct fibonacci<0> {
  static const int val = 0;
};

constexpr int cexpr_fibonacci(int n) {
  if (n == 1 || n == 0) {
    return n;
  }
  return cexpr_fibonacci(n - 1) + cexpr_fibonacci(n - 2);
}

#endif // !FIBONACCI_H_
