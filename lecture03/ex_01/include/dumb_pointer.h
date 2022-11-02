#ifndef DUMB_POINTER_H_
#define DUMB_POINTER_H_

template <typename T> class dumb_pointer {
  T *p;

public:
  dumb_pointer(T *t) : p(t) {}
  T &operator*() { return *p; }
  T *operator->() { return p; }
  ~dumb_pointer() { delete p; }
};

#endif // !DUMB_POINTER_H_
