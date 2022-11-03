#include "../include/playfield.h"
#include <iostream>

using namespace std;

playfield::playfield() { reset_board(); }

void playfield::reset_board() {
  for (int i = 0; i < width; ++i) {
    for (int j = 0; j < height; ++j) {
      rep[i][j] = none;
    }
  }
}

int playfield::stoneat(int x, int y) const { return rep[x][y]; }

char playfield::convert_to_ascii(int row, int col) {
  int input = rep[row][col];
  if (input == player1) {
    return 'X';
  } else if (input == player2) {
    return 'O';
  }
  return '_';
}

void playfield::printboard() {
  cout << endl << "  0   1   2   3   4   5   6" << endl;
  for (int i = 0; i < height; ++i) {
    cout << "| ";
    for (int j = 0; j < width; ++j) {
      cout << convert_to_ascii(j, i) << " | ";
    }
    cout << endl;
  }
}

void playfield::insert_stone(int col, int pl) {
  for (int row = 0; row < height; ++row) {
    int current = stoneat(col, row);
    if (current == player1 || current == player2) {
      rep[col][row - 1] = pl;
      return;
    }
  }
  rep[col][height - 1] = pl;
}
