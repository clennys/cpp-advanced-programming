#ifndef FRACTION_H
#define FRACTION_H
/*
INCLUDE GUARDS
--------------
Once the header is included, it checks if a unique value is defined. Then if
it's not defined, it defines it and continues to the rest of the page. When the
code is included again, the first ifndef fails, resulting in a blank file. That
prevents double declaration of any identifiers such as types, enums and static
variables.
*/

#include <iostream>

using namespace std;

class fraction {
public:
  fraction(int num = 0, int denom = 1);
  fraction operator+(fraction b);
  fraction operator-(fraction b);
  fraction operator*(fraction b);
  fraction operator/(fraction b);
  bool operator<(fraction b);
  bool operator>(fraction b);
  bool operator==(fraction b);
  void reduce();
  friend ostream &operator<<(ostream &os, fraction f);
  friend istream &operator>>(istream &is, fraction &f);

  ~fraction();

private:
  int numerator;
  int denominator;
};

#endif // !FRACTION_H
