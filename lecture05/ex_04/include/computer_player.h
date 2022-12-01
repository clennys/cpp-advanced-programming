#ifndef EX_L4_1_COMPUTER_PLAYER_H
#define EX_L4_1_COMPUTER_PLAYER_H

#include <algorithm>
#include <iostream>
#include <list>
#include <random>

#include "playfield.h"
#include "util.h"

using namespace std;

template <typename F> struct computer_player {

  list<int> best_moves;

public:
  computer_player() {}

  int select_field(F &field) { // TODO look at return type
    list<int> best_moves;
    int max = 0;
    for (int i = 0; i < playfield::width; i++) {
      int rating = util<F>::rate_move(field, i);
      if (rating == max || best_moves.empty()) {
        best_moves.push_back(i + 1);
        max = rating;
      } else if (rating > max) {
        max = rating;
        best_moves.clear();
        best_moves.push_back(i + 1);
      }
    }
    // unsigned int size = best_moves.size();
    //        for(int i = 0; i < size; i++) { //Only needed for debugging when
    //        trying to make opponent better
    //            cout << "Best moves at " <<  best_moves.front() << " with max
    //            " << max << endl; best_moves.push_back(best_moves.front());
    //            best_moves.pop_front();
    //        }

    if (max < 2) {
      return 0;
    }
    int times = randomNumber(0, best_moves.size() - 1);
    for (int i = 0; i < times; i++) {
      best_moves.pop_front();
    }
    cout << "Picked" << best_moves.front();
    return best_moves.front();
  }

  int play(F &field) {

    if (select_field(field) != 0) {
      return select_field(field);
    }
    int position;
    position = randomNumber(1, 7);
    while (!util<F>::is_playable(field, position)) {
      position = randomNumber(1, 7);
    }
    return position;
  }

  int randomNumber(int start, int end) {
    std::random_device rd;  // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(start, end); // define the range
    return distr(gen);
  }
};

#endif // EX_L4_1_COMPUTER_PLAYER_H
