#ifndef COPY_FIELD_H_
#define COPY_FIELD_H_

#include "playfield.h"

class copy_field : public playfield {
public:
  char rep[playfield::width][playfield::height];
  copy_field(const playfield &field);
  virtual int stoneat(int x, int y) const override;
  void insert_stone(int col, int pl);
};

#endif // !COPY_FIELD_H_
