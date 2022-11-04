#ifndef PLAYFIELD_HELP_H_
#define PLAYFIELD_HELP_H_

#include "playfield.h"
#include <iostream>

using namespace std;

template <typename F> class playfield_help {
public:
  static bool valid_input(const F &field, int col) {
    return col > -1 && col < F::width && field.stoneat(col, 0) == F::none;
  }
  static bool is_full(const F &field) {
    for (int i = 0; i < F::width; ++i) {
      if (field.stoneat(i, 0) == F::none) {
        return false;
      }
    }
    return true;
  }

  static bool has_won(const F &field, int player) {
    for (int col = 0; col < F::width; ++col) {
      for (int row = 0; row < F::height; ++row) {
        // horizontal
        if (player == field.stoneat(col, row) &&
            player == field.stoneat(col + 1, row) &&
            player == field.stoneat(col + 2, row) &&
            player == field.stoneat(col + 3, row)) {
          cout << "You won horizontal!" << endl;
          return true;
        }
        // horizontal
        if (player == field.stoneat(col, row) &&
            player == field.stoneat(col, row + 1) &&
            player == field.stoneat(col, row + 2) &&
            player == field.stoneat(col, row + 3)) {
          cout << "You won vertically!" << endl;
          return true;
        }
        // diagonal bottom left to top right
        if (player == field.stoneat(col, row) &&
            player == field.stoneat(col + 1, row + 1) &&
            player == field.stoneat(col + 2, row + 2) &&
            player == field.stoneat(col + 3, row + 3)) {
          cout << "You won diagonally top left to bottom right!" << endl;
          return true;
        }
        // diagonal bottom right to top left
        if (player == field.stoneat(col, row) &&
            player == field.stoneat(col + 1, row - 1) &&
            player == field.stoneat(col + 2, row - 2) &&
            player == field.stoneat(col + 3, row - 3)) {
          cout << "You won diagonally bottom left to right!" << endl;
          return true;
        }
      }
    }
    return false;
  }
};

#endif // !PLAYFIELD_HELP_H_
