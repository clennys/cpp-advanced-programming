#ifndef DENNYS_AI_
#define DENNYS_AI_

#include "field_helper.h"
#include <algorithm>
#include <iostream>
#include <vector>

#define MAX_SCORE 1000000
#define MIN_SCORE -1000000

using namespace std;

template <typename F> class AI {
public:
  bool has_won(const F &field, int player) {
    for (int col = 0; col < F::width; ++col) {
      for (int row = 0; row < F::height; ++row) {
        // horizontal
        if (col < F::width - 3) {
          if (player == field.stoneat(col, row) &&
              player == field.stoneat(col + 1, row) &&
              player == field.stoneat(col + 2, row) &&
              player == field.stoneat(col + 3, row)) {
            return true;
          }
        }
        // vertical
        if (row < F::height - 3) {
          if (player == field.stoneat(col, row) &&
              player == field.stoneat(col, row + 1) &&
              player == field.stoneat(col, row + 2) &&
              player == field.stoneat(col, row + 3)) {
            return true;
          }
        }
        // diagonal bottom left to top right
        if (col < F::width - 3 && row < F::height - 3) {
          if (player == field.stoneat(col, row) &&
              player == field.stoneat(col + 1, row + 1) &&
              player == field.stoneat(col + 2, row + 2) &&
              player == field.stoneat(col + 3, row + 3)) {
            return true;
          }
        }
        // diagonal bottom right to top left
        if (row > 3 && col < F::width - 3) {
          if (player == field.stoneat(col, row) &&
              player == field.stoneat(col + 1, row - 1) &&
              player == field.stoneat(col + 2, row - 2) &&
              player == field.stoneat(col + 3, row - 3)) {
            return true;
          }
        }
      }
    }
    return false;
  }

  vector<vector<int>> possible_moves(const F &field) {
    vector<vector<int>> moves;
    for (int col = 0; col < F::width; ++col) {
      if (field.stoneat(col, 0) == F::none) {
        for (int row = 1; row < F::height; ++row) {
          if (field.stoneat(col, row) != F::none) {
            vector<int> pos;
            pos.push_back(col);
            pos.push_back(row - 1);
            moves.push_back(pos);
          }
        }
        if (field.stoneat(col, F::height - 1) == F::none) {
          vector<int> pos;
          pos.push_back(col);
          pos.push_back(F::height - 1);
          moves.push_back(pos);
        }
      }
    }
    return moves;
  }
  int heuristic(vector<int> quintet, int pl) {
    int bad = 0;
    int score = 0;
    int good = 0;
    int empty = 0;
    for (unsigned int i = 0; i < quintet.size(); ++i) {
      if (pl == quintet[i]) {
        good++;
      } else if (quintet[i] == F::none) {
        empty++;
      } else {
        bad++;
      }
    }
    if (good == 4) {
      score = 500001;
    } else if (good == 3 && empty == 1) {
      score = 5000;
    } else if (good == 2 && empty == 2) {
      score = 500;
    } else if (bad == 2 && empty == 2) {
      score = -501;
    } else if (bad == 3 && empty == 1) {
      score = -5001;
    } else if (bad == 4) {
      score = -500000;
    }

    return score;
  }

  int position_score(const F &field, int pl) {
    int score = 0;
    for (int col = 0; col < F::width; ++col) {
      for (int row = 0; row < F::height - 3; ++row) {
        vector<int> quintet;
        int stone0 = field.stoneat(col, row);
        quintet.push_back(stone0);
        int stone1 = field.stoneat(col, row + 1);
        quintet.push_back(stone1);
        int stone2 = field.stoneat(col, row + 2);
        quintet.push_back(stone2);
        int stone3 = field.stoneat(col, row + 3);
        quintet.push_back(stone3);
        score += heuristic(quintet, pl);
      }
    }
    for (int row = 0; row < F::height; ++row) {
      for (int col = 0; col < F::width - 3; ++col) {
        vector<int> quintet;
        int stone0 = field.stoneat(col, row);
        quintet.push_back(stone0);
        int stone1 = field.stoneat(col + 1, row);
        quintet.push_back(stone1);
        int stone2 = field.stoneat(col + 2, row);
        quintet.push_back(stone2);
        int stone3 = field.stoneat(col + 3, row);
        quintet.push_back(stone3);
        score += heuristic(quintet, pl);
      }
    }

    for (int i = 0; i < F::width - 3; i++) {
      for (int j = 3; j < F::height; j++) {
        vector<int> quintet;
        int stone0 = field.stoneat(i, j);
        quintet.push_back(stone0);
        int stone1 = field.stoneat(i + 1, j - 1);
        quintet.push_back(stone1);
        int stone2 = field.stoneat(i + 2, j - 2);
        quintet.push_back(stone2);
        int stone3 = field.stoneat(i + 3, j - 3);
        quintet.push_back(stone3);
        score += heuristic(quintet, pl);
      }
    }
    for (int i = 0; i < F::width - 3; i++) {
      for (int j = 3; j < F::height - 3; j++) {
        vector<int> quintet;
        int stone0 = field.stoneat(i, j);
        quintet.push_back(stone0);
        int stone1 = field.stoneat(i + 1, j + 1);
        quintet.push_back(stone1);
        int stone2 = field.stoneat(i + 2, j + 2);
        quintet.push_back(stone2);
        int stone3 = field.stoneat(i + 3, j + 3);
        quintet.push_back(stone3);
        score += heuristic(quintet, pl);
      }
    }

    return score;
  }
  bool winning_move(F field, int pl) {
    vector<vector<int>> moves = possible_moves(field);
    for (unsigned int i = 0; i < moves.size(); ++i) {
      field.insert_stone(moves[i][0], pl);
      if (has_won(field, pl)) {
        return true;
      }
    }
    return false;
  }

  int minimax(F &field, int depth, int height, bool max_player, int alpha,
              int beta, int pl) {
    int opponent = pl == 1 ? 2 : 1;
    int value = 0;
    int bestVal = 0;
    if (depth == height) {
      return position_score(field, pl);
    }
    if (max_player) {
      bestVal = MIN_SCORE;
      if (has_won(field, opponent)) {
        return bestVal;
      }
      vector<vector<int>> moves = possible_moves(field);
      for (unsigned int i = 0; i < moves.size(); ++i) {
        F field_copy = field;
        field_copy.insert_stone(moves[i][0], pl);
        value = minimax(field_copy, depth + 1, height, false, alpha, beta, pl);
        bestVal = max(bestVal, value);
        alpha = max(alpha, bestVal);
        if (beta <= alpha) {
          break;
        }
      }
      return bestVal;
    } else {
      bestVal = MAX_SCORE;
      if (has_won(field, pl)) {
        return bestVal;
      }
      vector<vector<int>> moves = possible_moves(field);
      for (unsigned int i = 0; i < moves.size(); ++i) {
        F field_copy = field;
        field_copy.insert_stone(moves[i][0], opponent);
        value = minimax(field_copy, depth + 1, height, true, alpha, beta, pl);
        bestVal = min(bestVal, value);
        alpha = min(alpha, bestVal);
        if (beta <= alpha) {
          break;
        }
      }
      return bestVal;
    }
  }

  int which_players_turn(const F &field) {
    int counter;
    for (int col = 0; col < F::width; ++col) {
      for (int row = 0; row < F::height; ++row) {
        if (field.stoneat(col, row) != F::none) {
          ++counter;
        }
      }
    }
    if (counter % 2 == 1) {
      return 1;
    } else {
      return 2;
    }
  }

  int play(const F &field) {
    vector<vector<int>> moves = possible_moves(field);
    vector<int> scores;
    int pl = which_players_turn(field);
    int opponent = pl == 1 ? 2 : 1;

    for (unsigned int i = 0; i < moves.size(); ++i) {
      F field_copy = field;
      field_copy.insert_stone(moves[i][0], pl);
      if (has_won(field_copy, pl)) {
        return moves[i][0];
      }
    }

    for (unsigned int i = 0; i < moves.size(); ++i) {
      F field_copy = field;
      field_copy.insert_stone(moves[i][0], opponent);
      if (has_won(field_copy, opponent)) {
        return moves[i][0];
      }
    }

    for (unsigned int i = 0; i < moves.size(); ++i) {
      F field_copy = field;
      field_copy.insert_stone(moves[i][0], pl);
      if (pl == 1) {
        scores.push_back(
            minimax(field_copy, 0, 3, true, MIN_SCORE, MAX_SCORE, pl));
      } else {
        scores.push_back(
            minimax(field_copy, 0, 3, false, MIN_SCORE, MAX_SCORE, pl));
      }
    }

    int max_element_index =
        max_element(scores.begin(), scores.end()) - scores.begin();

    int move_col = moves[max_element_index][0];

    return move_col;
  }
};

#endif // !DENNYS_AI_
