#ifndef OBJECT_H_
#define OBJECT_H_

#include <iostream>

using namespace std;

class Object {
  int id;

public:
  Object(int i);
  int method1();
  int method2();
  int method3();
  friend ostream &operator<<(ostream &os, const Object &o);
};

#endif // !OBJECT_H_
