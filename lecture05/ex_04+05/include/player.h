#ifndef PLAYER_H_
#define PLAYER_H_

#include "playfield.h"
#include <iostream>
class player {
public:
  virtual int play(const playfield &field) = 0;
  virtual ~player() {}
};
#endif /* PLAYER_H_ */
