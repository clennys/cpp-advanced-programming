#ifndef RPN_H_
#define RPN_H_

#include "../../lecture02/ex_01/pvector.h"
#include "maxmin_traits.h"
#include <iostream>
#include <ostream>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>

using namespace std;
template <typename T> T min_calc(T a, T b) { return a < b ? a : b; }
template <typename T> T max_calc(T a, T b) { return a > b ? a : b; }

template <typename T>
concept ordered_type = requires(T x) { x < x; };

template <typename T> class rpn {
  pvector<T> vec;

  void add(T a, T b) { push(b + a); }
  void sub(T a, T b) { push(b - a); }
  void mult(T a, T b) { push(b * a); }
  void div(T a, T b) { push(b / a); }
  void max(T a, T b)
    requires ordered_type<T>
  {
    push(max_calc(a, b));
  }
  void min(T a, T b)
    requires ordered_type<T>
  {
    push(min_calc(a, b));
  }

  void max(T a, T b) {
    push(b);
    push(a);
    throw invalid_argument(
        "MAX Not supported due to type not being comparable!");
  }

  void min(T a, T b) {
    push(b);
    push(a);
    throw invalid_argument(
        "Min Not supported due to type not being comparable!");
  }

public:
  rpn(string filename) : vec(filename) {}

  void print_vector() {
    cout << endl;
    if (vec.size() < 1) {
      cout << "Stack is empty" << endl;
      return;
    }
    for (int i = 0; i < vec.size(); i++) {
      cout << i << ": " << vec[i] << endl;
    }
    cout << endl;
  }

  void calculation(char op) {
    T a, b, res;
    if (!(vec.size() < 2)) {
      a = pop();
      b = pop();
      operation(a, b, op);
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
          push(type);
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
  void operation(T a, T b, char op) {
    if (op == '+') {
      add(a, b);
    } else if (op == '-') {
      sub(a, b);
    } else if (op == '*') {
      mult(a, b);
    } else if (op == 'x') {
      try {
        max(a, b);
      } catch (const invalid_argument &ex) {
        cout << ex.what() << endl;
      }
    } else if (op == 'm') {
      try {
        min(a, b);
      } catch (const invalid_argument &ex) {
        cout << ex.what() << endl;
      }
    } else {
      div(a, b);
    }
  }

  void push(T a) { vec.push_back(a); }

  T pop() {
    T el = vec.back();
    vec.pop_back();
    return el;
  }

  ~rpn() {}
};
#endif // !RPN_H_
