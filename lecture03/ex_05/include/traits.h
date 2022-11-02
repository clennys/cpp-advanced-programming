#ifndef HELPER_PLAYER_H_
#define HELPER_PLAYER_H_

#include "playfield.h"
#include <iostream>

using namespace std;

template <typename F> class traits {
public:
  static bool valid_input(const F &field, int col) {
    return col > -1 && col < playfield::width &&
           field.stoneat(0, col) == playfield::none;
  }
  static bool is_full(const F &field) {
    for (int i = 0; i < playfield::width; ++i) {
      if (field.stoneat(0, i) == playfield::none) {
        return false;
      }
    }
    return true;
  }

  static bool has_won(const F &field, int player) {
    for (int row = 0; row < playfield::height; ++row) {
      for (int col = 0; col < playfield::width; ++col) {
        // vertical
        if (player == field.stoneat(row, col) &&
            player == field.stoneat(row + 1, col) &&
            player == field.stoneat(row + 2, col) &&
            player == field.stoneat(row + 3, col)) {
          cout << "You won vertically!" << endl;
          return true;
        }
        // horizontal
        if (player == field.stoneat(row, col) &&
            player == field.stoneat(row, col + 1) &&
            player == field.stoneat(row, col + 2) &&
            player == field.stoneat(row, col + 3)) {
          cout << "You won horizontally!" << endl;
          return true;
        }
        // diagonal bottom left to top right
        if (player == field.stoneat(row, col) &&
            player == field.stoneat(row + 1, col + 1) &&
            player == field.stoneat(row + 2, col + 2) &&
            player == field.stoneat(row + 3, col + 3)) {
          cout << "You won diagonally top left to bottom right!" << endl;
          return true;
        }
        // diagonal bottom right to top left
        if (player == field.stoneat(row, col) &&
            player == field.stoneat(row - 1, col + 1) &&
            player == field.stoneat(row - 2, col + 2) &&
            player == field.stoneat(row - 3, col + 3)) {
          cout << "You won diagonally bottom left to right!" << endl;
          return true;
        }
      }
    }
    return false;
  }
};

#endif // !HELPER_PLAYER_H_
