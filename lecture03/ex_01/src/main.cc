#include "../include/object.h"
#include "../include/smart_pointer.h"
#include <iostream>

using namespace std;

void print(smart_pointer<Object> p) {
  cout << p.counter() << ": " << *p << endl;
}
void foo() {
  Object *o1 = new Object(1);
  Object *o2 = new Object(2);
  smart_pointer<Object> p(o1);
  cout << p.counter() << endl;
  smart_pointer<Object> q(p);
  cout << p.counter() << endl;
  cout << q.counter() << endl;
  smart_pointer<Object> r(o2);
  cout << r.counter() << endl;
  q = r;
  cout << p.counter() << endl;
  cout << q.counter() << endl;
  cout << r.counter() << endl;
  print(p);
  print(q);
  print(r);
  cout << *p << *r << endl;
  cout << p->method1() << q->method2() << r->method3() << endl;
}

int main(int argc, char *argv[]) {
  foo();
  return 0;
}
