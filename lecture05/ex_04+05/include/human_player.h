#ifndef HUMAN_PLAYER_H_
#define HUMAN_PLAYER_H_

#include "field_helper.h"
#include "player.h"
#include "playfield.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class human_player : public player {
  // returns the column where the player decides to insert his
  // stone
  // F is the playfield which may be any playfield implementing
  // the stoneat method, if you expect a different class because
  // you need methods to verify whether the opponent can win,
  // copy the field into the class that you expect.
public:
  human_player();
  virtual int play(const playfield &field) override;
};

#endif // !HUMAN_PLAYER_H_
