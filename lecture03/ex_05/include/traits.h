#ifndef HELPER_PLAYER_H_
#define HELPER_PLAYER_H_

#include <iostream>
#include <vector>

#define MAX_SCORE 1000000
#define MIN_SCORE -1000000

using namespace std;

template <typename F> class traits {
public:
  static bool valid_input(const F &field, int col) {
    return col > -1 && col < F::width && field.stoneat(col, 0) == F::none;
  }
  static bool is_full(const F &field) {
    for (int i = 0; i < F::width; ++i) {
      if (field.stoneat(i, 0) == F::none) {
        return false;
      }
    }
    return true;
  }

  static bool has_won(const F &field, int player) {
    for (int col = 0; col < F::width; ++col) {
      for (int row = 0; row < F::height; ++row) {
        // horizontal
        if (player == field.stoneat(col, row) &&
            player == field.stoneat(col + 1, row) &&
            player == field.stoneat(col + 2, row) &&
            player == field.stoneat(col + 3, row)) {
          cout << "You won horizontal!" << endl;
          return true;
        }
        // horizontal
        if (player == field.stoneat(col, row) &&
            player == field.stoneat(col, row + 1) &&
            player == field.stoneat(col, row + 2) &&
            player == field.stoneat(col, row + 3)) {
          cout << "You won vertically!" << endl;
          return true;
        }
        // diagonal bottom left to top right
        if (player == field.stoneat(col, row) &&
            player == field.stoneat(col + 1, row + 1) &&
            player == field.stoneat(col + 2, row + 2) &&
            player == field.stoneat(col + 3, row + 3)) {
          cout << "You won diagonally top left to bottom right!" << endl;
          return true;
        }
        // diagonal bottom right to top left
        if (player == field.stoneat(col, row) &&
            player == field.stoneat(col + 1, row - 1) &&
            player == field.stoneat(col + 2, row - 2) &&
            player == field.stoneat(col + 3, row - 3)) {
          cout << "You won diagonally bottom left to top right!" << endl;
          return true;
        }
      }
    }
    return false;
  }

  static vector<vector<int>> possible_moves(const F &field) {
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
  static int heuristic(vector<int> quintet, int pl) {
    int empty, good, bad, score = 0;
    for (int i = 0; i < 4; ++i) {
      if (pl == quintet[i]) {
        good++;
      } else if (quintet == F::none) {
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

  static int position_score(const F &field, int pl) {
    int score = 0;
    for (int col = 0; col < F::width; ++col) {
      vector<int> quintet;
      for (int row = 0; row < F::height - 3; ++row) {
        int stone0 = F::stoneeat(col, row);
        quintet.push_back(stone0);
        int stone1 = F::stoneeat(col, row + 1);
        quintet.push_back(stone1);
        int stone2 = F::stoneeat(col, row + 2);
        quintet.push_back(stone2);
        int stone3 = F::stoneeat(col, row + 3);
        quintet.push_back(stone3);
      }
      score += heuristic(quintet, pl);
    }
    for (int row = 0; row < F::height; ++row) {
      vector<int> quintet;
      for (int col = 0; col < F::width - 3; ++col) {
        int stone0 = F::stoneeat(col, row);
        quintet.push_back(stone0);
        int stone1 = F::stoneeat(col + 1, row);
        quintet.push_back(stone1);
        int stone2 = F::stoneeat(col + 2, row);
        quintet.push_back(stone2);
        int stone3 = F::stoneeat(col + 3, row);
        quintet.push_back(stone3);
      }
      score += heuristic(quintet, pl);
    }

    for (int i = 0; i < F::width - 3; i++) {
      vector<int> quintet;
      for (int j = 0; j < F::height - 3; j++) {
        int stone0 = F::stoneeat(i, j);
        quintet.push_back(stone0);
        int stone1 = F::stoneeat(i + 1, j - 1);
        quintet.push_back(stone1);
        int stone2 = F::stoneeat(i + 2, j - 2);
        quintet.push_back(stone2);
        int stone3 = F::stoneeat(i + 3, j - 3);
        quintet.push_back(stone3);
      }
      score += heuristic(quintet, pl);
    }
    for (int i = 0; i < F::width - 3; i++) {
      vector<int> quintet;
      for (int j = 3; j < F::height; j++) {
        int stone0 = F::stoneeat(i, j);
        quintet.push_back(stone0);
        int stone1 = F::stoneeat(i + 1, j + 1);
        quintet.push_back(stone1);
        int stone2 = F::stoneeat(i + 2, j + 2);
        quintet.push_back(stone2);
        int stone3 = F::stoneeat(i + 3, j + 3);
        quintet.push_back(stone3);
      }
      score += heuristic(quintet, pl);
    }

    return score;
  }
  // F needs to be a copy of that field
  static int simulation(const F &field, vector<int> move, int pl) {
    field.insert_stone(move[1], pl);
    if (has_won(field, pl)) {
      return MAX_SCORE;
    } else {
      return position_score(field);
    }
  }
};

#endif // !HELPER_PLAYER_H_
