#include <iostream>

using namespace std;

class base {
public:
  base() { cout << "Constructing base class" << endl; }
  ~base() { cout << "Destructing base class" << endl; }
};

class derived_lvl1 : public base {
public:
  derived_lvl1() { cout << "Constructing derived level 1 class" << endl; }
  ~derived_lvl1() { cout << "Destructing derived level 1 class" << endl; }
};
class derived_lvl2 : public derived_lvl1 {
public:
  derived_lvl2() { cout << "Constructing derived level 2 class" << endl; }
  ~derived_lvl2() { cout << "Destructing derived level 2 class" << endl; }
};
class derived_lvl3 : public derived_lvl2 {
public:
  derived_lvl3() { cout << "Constructing derived level 3 class" << endl; }
  ~derived_lvl3() { cout << "Destructing derived level 3 class" << endl; }
};

int main(int argc, char *argv[]) {
  derived_lvl3 obj = derived_lvl3();
  return 0;
}
