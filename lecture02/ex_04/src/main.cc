#include "playfield.h"
#include <iostream>

using namespace std;

int main() {
  playfield pl;
  while (true) {
    int col;
    cout << "Insert col number [0-6]" << endl;
    cin >> col;
    pl.insert_stone(col);
    pl.printboard();
  }

  return 0;
}
