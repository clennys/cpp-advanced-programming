#include <iostream>
#include <ostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

bool empty_stack(stack<int> stack);

void print_stack(stack<int> stack) {
  int counter = stack.size();
	if (empty_stack(stack)) {
		return;
	}
  while (!stack.empty()) {
    cout << counter << ": " << stack.top() << endl;
    stack.pop();
    counter--;
  }
}

bool empty_stack(stack<int> stack) {
  if (stack.empty()) {
    cout << "Stack is empty." << endl;
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

int get_pop_item(stack<int> &stack) {
  int el = 0;
  el = stack.top();
  stack.pop();
  return el;
}

void calc(stack<int> &stack, char op) {
  int a, b, res;
  if (!empty_stack(stack)) {
    a = get_pop_item(stack);
    if (!empty_stack(stack)) {
      b = get_pop_item(stack);
      res = operation(a, b, op);
    } else {
			stack.push(a);
      return;
    }
  } else {
    return;
  }
  stack.push(res);
}

void parse_input(string s, stack<int> &stack) {
  char op;
  int num;
  istringstream iss(s);

  while (iss >> op) {
    if (op == 'q') {
      exit(0);
    } else if (op == 'n') {
      iss >> num;
      if (!iss.fail()) {
        stack.push(num);
      }
    } else if (op == 'd') {
      if (!stack.empty()) {
        stack.pop();
      } else {
        cout << "Stack is empty." << endl;
      }

    } else if (op == '+') {
      calc(stack, op);
    } else if (op == '-') {
      calc(stack, op);
    } else if (op == '*') {
      calc(stack, op);
    } else if (op == '/') {
      calc(stack, op);
    } else {
      cout << "Invalid operator." << endl;
    }
  }
}

int main(int argc, char *argv[]) {

  char c;
  string input;
  stack<int> stack;

  cout << "Welcome, this is a RPN Calculator!" << endl;
  while (true) {
    cout << "Command: ";
    getline(cin, input);
    parse_input(input, stack);
    print_stack(stack);
  }

  return 0;
}
