#ifndef DENNYS_AI_
#define DENNYS_AI_

#include "player.h"
#include "playfield.h"
#include <algorithm>
#include <iostream>
#include <vector>

#define MAX_SCORE 1000000
#define MIN_SCORE -1000000

using namespace std;

class AI : public player {
public:
  bool has_won(const playfield &field, int player);
  vector<vector<int>> possible_moves(const playfield &field);
  int heuristic(vector<int> quintet, int pl);
  int position_score(const playfield &field, int pl);
  // bool winning_move(playfield field, int pl);
  int minimax(playfield &field, int depth, int height, bool max_player,
              int alpha, int beta, int pl);
  int which_players_turn(const playfield &field);
  virtual int play(const playfield &field) override;
};

#endif // !DENNYS_AI_
