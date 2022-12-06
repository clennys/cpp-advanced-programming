#include "../include/fibonacci.h"
#include "../include/gdm.h"
#include <iostream>

using namespace std;

int main() {
  cout << "===== Fibnoacci =====" << endl;
  cout << "Using templates..." << endl;
  cout << "Fib 40: " << fibonacci<40>::val << endl;
  cout << "Fib 10: " << fibonacci<10>::val << endl;
  cout << "Fib 1: " << fibonacci<1>::val << endl;

  cout << "Using constexpr..." << endl;
  cout << "Fib 40: " << cexpr_fibonacci(40) << endl;
  cout << "Fib 10: " << cexpr_fibonacci(10) << endl;
  cout << "Fib 1: " << cexpr_fibonacci(1) << endl;

  cout << endl << "===== GDM =====" << endl;
  cout << "Using templates..." << endl;
  cout << "GDM: 36, 48: " << gdm<36, 48>::val << endl;
  cout << "GDM: 17, 16: " << gdm<17, 16>::val << endl;
  cout << "GDM: 105, 30: " << gdm<105, 30>::val << endl;

  cout << "Using constexpr..." << endl;
  cout << "GDM: 36, 48: " << cexpr_gdm(36, 48) << endl;
  cout << "GDM: 17, 16: " << cexpr_gdm(17, 16) << endl;
  cout << "GDM: 105, 30: " << cexpr_gdm(105, 30) << endl;

  return 0;
}
