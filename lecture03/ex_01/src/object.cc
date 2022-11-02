#include "../include/object.h"

#include <iostream>

using namespace std;

Object::Object(int i) : id(i) {}
int Object::method1() { return id * 2; }
int Object::method2() { return id * 3; }
int Object::method3() { return id * 4; }

ostream &operator<<(ostream &os, const Object &o) {
  os << "value: " << o.id;
  return os;
}
