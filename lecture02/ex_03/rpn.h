#ifndef RPN_H_
#define RPN_H_

#include "../ex_01/pvector.h"
#include <iostream>
#include <ostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

template <typename T> class rpn {
  pvector<T> vec;

  T add(T a, T b) { return b + a; }
  T sub(T a, T b) { return b - a; }
  T mult(T a, T b) { return b * a; }
  T div(T a, T b) { return b / a; }

public:
  rpn(string filename);
  ~rpn();

  T pop();
  T operation(T a, T b, char op);
  void calculation(char op);
  void parse_input(string s);
  void print_vector();
};

template <typename T> rpn<T>::rpn(string filename) : vec(filename) {}

template <typename T> void rpn<T>::print_vector() {
  if (vec.size() < 1) {
    cout << "Stack is empty" << endl;
    return;
  }
  for (int i = 0; i < vec.size(); i++) {
    cout << i << ": " << vec[i] << endl;
  }
}

template <typename T> void rpn<T>::calculation(char op) {
  T a, b, res;
  if (!vec.size() < 2) {
    a = pop();
    b = pop();
    res = operation(a, b, op);
    vec.push_back(res);
  } else {
    return;
  }
}

template <typename T> void rpn<T>::parse_input(string s) {
  char op;
  T type;
  istringstream iss(s);

  while (iss >> op) {
    if (op == 'q') {
      exit(0);
    } else if (op == 'n') {
      iss >> type;
      if (!iss.fail()) {
        vec.push_back(type);
      }
    } else if (op == 'd') {
      if (!vec.size() < 1) {
        vec.pop_back();
      } else {
        cout << "stack is empty." << endl;
      }
    } else if (op == '+' || op == '-' || op == '*' || op == '/') {
      calculation(op);
    } else {
      cout << "Invalid operator.";
    }
  }
}
template <typename T> T rpn<T>::operation(T a, T b, char op) {
  if (op == '+') {
    return add(a, b);
  } else if (op == '-') {
    return sub(a, b);
  } else if (op == '*') {
    return mult(a, b);
  } else {
    return div(a, b);
  }
}

template <typename T> T rpn<T>::pop() {
  T el = vec.back();
  vec.pop_back();
  return el;
}

template <typename T> rpn<T>::~rpn() {}
#endif // !RPN_H_
