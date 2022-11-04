#include "../include/dumb_pointer.h"
#include "../include/object.h"
#include "../include/smart_pointer.h"
#include <iostream>

using namespace std;

void dumb() {
  cout << "Dumb Pointer Test:" << endl;

  Object *o = new Object(1);
  dumb_pointer<Object> p = o;

  cout << "Value: " << *p << endl;
}

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

  cout << "1st object: " << *p << " 2nd object: " << *r << endl;
  cout << "Method1: " << p->method1() << endl
       << "Method2: " << q->method2() << endl
       << "Method3: " << r->method3() << endl;
}

int main(int argc, char *argv[]) {
  cout << "dumb_pointer" << endl;
  dumb();
  cout << "smart_pointer" << endl;
  foo();
  return 0;
}
