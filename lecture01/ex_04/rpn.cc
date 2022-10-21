#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

bool empty_vector(vector<int> vector);

void print_vector(vector<int> vector) {
  if (vector.empty()) {
    return;
  }
  for (int i = 0; i < vector.size(); i++) {
    cout << i << ": " << vector[i] << endl;
  }
}

bool empty_vector(vector<int> vector) {
  if (vector.empty()) {
    cout << "stack is empty." << endl;
    return true;
  }
  return false;
}

int operation(int a, int b, char op) {
  if (op == '+') {
    return b + a;
  } else if (op == '-') {
    return b - a;
  } else if (op == '*') {
    return b * a;
  } else if (op == '/') {
    return b / a;
  }
  return 0;
}

int pop(vector<int> &vector) {
  int el = 0;
  el = vector.back();
  vector.pop_back();
  return el;
}

void calc(vector<int> &vector, char op) {
  int a, b, res;
  if (!(vector.size() < 2)) {
    a = pop(vector);
    b = pop(vector);
    res = operation(a, b, op);
  } else {
    cout << "you need at least two numbers on the stack" << endl;
    return;
  }
  vector.push_back(res);
}

void parse_input(string s, vector<int> &vector) {
  char op;
  int num;
  istringstream iss(s);

  while (iss >> op) {
    if (op == 'q') {
      exit(0);
    } else if (op == 'n') {
      iss >> num;
      if (!iss.fail()) {
        vector.push_back(num);
      }
    } else if (op == 'd') {
      if (!vector.empty()) {
        vector.pop_back();
      } else {
        cout << "vector is empty." << endl;
      }

    } else if (op == '+') {
      calc(vector, op);
    } else if (op == '-') {
      calc(vector, op);
    } else if (op == '*') {
      calc(vector, op);
    } else if (op == '/') {
      calc(vector, op);
    } else {
      cout << "Invalid operator." << endl;
    }
  }
}

int main(int argc, char *argv[]) {

  char c;
  string input;
  vector<int> vector;

  cout << "Welcome, this is a RPN Calculator!" << endl;
  while (true) {
    cout << "Command: ";
    getline(cin, input);
    parse_input(input, vector);
    print_vector(vector);
  }

  return 0;
}
