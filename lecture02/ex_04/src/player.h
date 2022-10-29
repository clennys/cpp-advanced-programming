#ifndef PLAYER_H_
#define PLAYER_H_

template <typename F> struct player {
  // returns the column where the player decides to insert his
  // stone
  // F is the playfield which may be any playfield implementing
  // the stoneat method, if you expect a different class because
  // you need methods to verify whether the opponent can win,
  // copy the field into the class that you expect.
  int play(const F &field);
};

#endif // !PLAYER_H_
