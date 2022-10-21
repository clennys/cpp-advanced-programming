#include <iostream>
using namespace std;

void c_swap(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

int main(int argc, char *argv[]) {
  int a = 777;
  int b = 222;

  cout << "Before Swap: " << a << ", " << b << endl;
  c_swap(&a, &b);
  cout << "After Swap: " << a << ", " << b << endl;

  return 0;
}
