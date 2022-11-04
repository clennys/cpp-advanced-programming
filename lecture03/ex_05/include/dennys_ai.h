#ifndef DENNYS_AI_
#define DENNYS_AI_

#include "traits.h"
#include <iostream>
#include <vector>

using namespace std;

template <typename F> class AI {
  int id;
  int play(const F &field){

  };
  vector<vector<int>> possible_moves() {
    vector<vector<int>> moves;
    for (int col = 0; col < F::width; ++col) {
      if (F::stoneat(col, 0) == F::none) {
        for (int row = 1; row < F::height; ++row) {
          if (F::stoneeat(col, row) != F::none) {
            vector<int> pos;
            pos.push_back(col);
            pos.push_back(row);
            moves.push_back(pos);
          }
        }
      }
    }
    return moves;
  }

  int horizontal_quartet(const F &field) {
    for (int i = 0; i < F::height; ++i) {
      for (int j = 0; j < F::width - 3; ++j) {
      }
    }
  }
};

#endif // !DENNYS_AI_
