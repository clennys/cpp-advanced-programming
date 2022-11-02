#ifndef PLAYFIELD_H_
#define PLAYFIELD_H_

class playfield {

public:
  // the size of the field
  const static int width = 7;
  const static int height = 6;

  // these elements are used to indicate whether a given position
  // in the playing field is taken by a given player
  const static char none = 0;
  const static char player1 = 1;
  const static char player2 = 2;

  // the internal representation of the field
  char rep[playfield::width][playfield::height];

  // return the stone (none/player1/player2) at position(x, y)
  // 0 <= x <= width
  // 0 <= y <= height
  // stoneat(0, 0) ................ top left
  // stoneat(width-1, height-1) ... bottom right
  // if we insert a stone in a new game in column i,
  // it lands at (i, height-1)
  // implementation may be changed, interface not
  void reset_board();

  playfield();
  int stoneat(int x, int y) const;
  void insert_stone(int col, char player = player1);
  char convert_to_ascii(int row, int col);

  void printboard();
};

#endif // !PLAYFIELD_H_
