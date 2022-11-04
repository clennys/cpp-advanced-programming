#ifndef RPN_H_
#define RPN_H_

#include "../../lecture02/ex_01/pvector.h"
#include "maxmin_traits.h"
#include <iostream>
#include <ostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

template <typename T, typename C = maxmin_traits<T>> class rpn {
  pvector<T> vec;

  T add(T a, T b) { return b + a; }
  T sub(T a, T b) { return b - a; }
  T mult(T a, T b) { return b * a; }
  T div(T a, T b) { return b / a; }
  T max(T a, T b) { return C::max(a, b); }
  T min(T a, T b) { return C::min(a, b); }

public:
  rpn(string filename) : vec(filename) {}

  void print_vector() {
    if (vec.size() < 1) {
      cout << "Stack is empty" << endl;
      return;
    }
    for (int i = 0; i < vec.size(); i++) {
      cout << i << ": " << vec[i] << endl;
    }
  }

  void calculation(char op) {
    T a, b, res;
    if (!(vec.size() < 2)) {
      a = pop();
      b = pop();
      res = operation(a, b, op);
      vec.push_back(res);
    } else {
      cout << "You need at least two elements on the stack." << endl;
      return;
    }
  }

  void parse_input(string s) {
    char op;
    T type;
    istringstream iss(s);

    while (iss >> op) {
      if (op == 'q') {
        vec.write();
        exit(0);
      } else if (op == 'n') {
        iss >> type;
        if (!iss.fail()) {
          vec.push_back(type);
        }
      } else if (op == 'd') {
        if (!(vec.size() < 1)) {
          vec.pop_back();
        } else {
          cout << "stack is empty." << endl;
        }
      } else if (op == '+' || op == '-' || op == '*' || op == '/' ||
                 op == 'x' || op == 'm') {
        calculation(op);
      } else {
        cout << "Invalid operator." << endl;
        break;
      }
    }
  }
  T operation(T a, T b, char op) {
    if (op == '+') {
      return add(a, b);
    } else if (op == '-') {
      return sub(a, b);
    } else if (op == '*') {
      return mult(a, b);
    } else if (op == 'x') {
      return max(a, b);
    } else if (op == 'm') {
      return min(a, b);
    } else {
      return div(a, b);
    }
  }

  T pop() {
    T el = vec.back();
    vec.pop_back();
    return el;
  }

  ~rpn() {}
};
#endif // !RPN_H_
