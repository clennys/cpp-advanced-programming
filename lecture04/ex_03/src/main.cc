#include "../include/range.h"
#include <iostream>

using namespace std;

int main() {
  for (auto i : range(10, 20))
    cout << i << endl;

  return 0;
}
