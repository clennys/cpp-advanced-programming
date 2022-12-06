#ifndef GDM_H_
#define GDM_H_

template <int A, int B> struct gdm {
  static const int val = gdm<B, B % A>::val;
};

template <int A> struct gdm<A, 0> {
  static const int val = A;
};

constexpr int cexpr_gdm(int a, int b) {
  return b == 0 ? a : cexpr_gdm(b, b % a);
}

#endif // !GDM_H_
