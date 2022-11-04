#ifndef SMART_POINTER_H_
#define SMART_POINTER_H_

template <typename T> class smart_pointer {
  T *p;
  int *ref;

public:
  smart_pointer(T *t) : p(t) { ref = new int(1); }
  smart_pointer(const smart_pointer<T> &t) : p(t.p), ref(t.ref) { add(); }
  T &operator*() { return *p; }
  T *operator->() { return p; }
  int counter() { return *ref; }
  void add() { ++(*ref); }
  void sub() {
    --(*ref);
    if ((*ref) < 1) {
      delete p;
      delete ref;
    };
  }

  smart_pointer<T> &operator=(const smart_pointer<T> &t) {
    if (this == &t) {
      return *this;
    }
    sub();
    p = t.p;
    ref = t.ref;
    add();
    return *this;
  }

  ~smart_pointer() { sub(); }
};

#endif // !SMART_POINTER_H_
