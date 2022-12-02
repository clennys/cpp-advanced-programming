#include "../include/copy_field.h"

copy_field::copy_field(const playfield &field) {
  for (int i = 0; i < width; ++i) {
    for (int j = 0; j < height; ++j) {
      rep[i][j] = field.stoneat(i, j);
    }
  }
}

int copy_field::stoneat(int x, int y) const { return rep[x][y]; }
void copy_field::insert_stone(int col, int pl) {
  for (int row = 0; row < height; ++row) {
    int current = stoneat(col, row);
    if (current == player1 || current == player2) {
      rep[col][row - 1] = pl;
      return;
    }
  }
  rep[col][height - 1] = pl;
}
