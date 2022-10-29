#include "playfield.h"
#include <iostream>

using namespace std;

playfield::playfield() { reset_board(); }

void playfield::reset_board() {
  for (int i = 0; i < playfield::width; ++i) {
    for (int j = 0; j < playfield::height; ++j) {
      rep[i][j] = none;
    }
  }
}

int playfield::stoneat(int x, int y) const { return rep[x][y]; }

void playfield::printboard() {

  for (int i = 0; i < playfield::width; ++i) {
    cout << "| ";
    for (int j = 0; j < playfield::height; ++j) {
      cout << rep[i][j] << " | ";
    }
    cout << endl;
  }
}

void playfield::insert_stone(int col, char pl) {
  for (int i = 0; i < playfield::height + 1; ++i) {
    char current = stoneat(i, col);
    if (current == player1 || current == player2) {
      rep[i - 1][col] = pl;
      return;
    }
  }
  rep[playfield::height][col] = pl;
}
