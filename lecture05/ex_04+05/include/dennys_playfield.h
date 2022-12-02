#ifndef DENNYS_PLAYFIELD_H_
#define DENNYS_PLAYFIELD_H_

#include "playfield.h"

class dennys_playfield : public playfield {

public:
  // the internal representation of the field
  char rep[playfield::width][playfield::height];

  dennys_playfield();
  void reset_board();
  int stoneat(int x, int y) const override;
  void insert_stone(int col, int player);
  char convert_to_ascii(int row, int col);
  void printboard();
};

#endif // !DENNYS_PLAYFIELD_H_
