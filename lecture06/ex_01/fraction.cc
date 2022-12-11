#include "fraction.h"
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int gcf(int a, int b) {

  if (a == 0)
    return a;
  if (b == 0)
    return b;

  a = abs(a);
  b = abs(b);

  while (a != b) {
    if (a > b)
      a -= b;
    else
      b -= a;
  }
  return a;
}

int lcm(int a, int b) { return a * b / gcf(a, b); }

fraction::fraction(int num, int denom) : numerator(num), denominator(denom) {}

fraction fraction::operator*(fraction b) {
  fraction f = fraction((this->numerator) * (b.numerator),
                        (this->denominator) * (b.denominator));
  f.reduce();
  return f;
}

fraction fraction::operator/(fraction b) {
  fraction swap = fraction(b.denominator, b.numerator);
  return (*this) * swap;
}

fraction fraction::operator+(fraction b) {
  int lcm = (this->denominator / gcf(this->denominator, b.denominator)) *
            b.denominator;
  int mult1 = lcm / this->denominator;
  int mult2 = lcm / b.denominator;
  fraction f = fraction(this->numerator * mult1 + b.numerator * mult2, lcm);
  f.reduce();
  return f;
}

fraction fraction::operator-(fraction b) {
  fraction neg = fraction(-b.numerator, b.denominator);
  return (*this) + neg;
}

ostream &operator<<(ostream &os, fraction f) {

  // if (f.denominator == 1) {
  //   os << '(' << f.numerator << ')';
  // } else if (f.denominator == -1) {
  //   os << '(' << -f.numerator << ')';
  // } else {
  os << '(' << f.numerator << '/' << f.denominator << ')';
  // }
  return os;
}

void fraction::reduce() {
  int gcd = gcf(this->numerator, this->denominator);
  if (this->numerator < 0 && this->denominator < 0) {
    this->numerator = abs(this->numerator);
    this->denominator = abs(this->denominator);
  }
  this->numerator = this->numerator / gcd;
  this->denominator = this->denominator / gcd;
}

void check_char(istream &is, char c) {
  char input;
  is >> input;
  if (c != input) {
    is.putback(input); // Attempts to decrease the current location in the
                       // stream by one character.
    is.setstate(ios::badbit);
  }
}

istream &operator>>(istream &is, fraction &f) {
  fraction g;
  check_char(is, '(');
  is >> g.numerator;
  check_char(is, '/');
  is >> g.denominator;
  check_char(is, ')');
  if (is) {
    f = g;
    f.reduce();
  }
  return is;
}

bool fraction::operator==(fraction b) {
  this->reduce();
  b.reduce();
  return (this->numerator == b.numerator) &&
         (this->denominator == b.denominator);
}

bool fraction::operator<(fraction b) {
  int fact = lcm(denominator, b.denominator);
  return numerator * fact / denominator < b.numerator * fact / b.denominator;
}

bool fraction::operator>(fraction b) {
  int fact = lcm(denominator, b.denominator);
  return numerator * fact / denominator > b.numerator * fact / b.denominator;
}

fraction::~fraction() { /* void */
}
