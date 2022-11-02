#ifndef GAME_H_
#define GAME_H_

#include "playfield.h"
#include "traits.h"
#include <iostream>

using namespace std;

template <typename F, typename T, typename U> class game {
  F field;
  T player1;
  U player2;

  int current_player;
  char current_char;

public:
  game(T player1, U player2) : player1(player1), player2(player2) {
    current_player = playfield::player1;
  }

  void run() {
    while (!traits<F>::is_full(field)) {
      field.printboard();
      current_char = current_player == playfield::player1 ? 'X' : 'O';
      cout << "Player with the " << current_char << " stones. Your turn!"
           << endl;
      current_player == playfield::player1
          ? field.insert_stone(player1.play(field), current_player)
          : field.insert_stone(player2.play(field), current_player);
      if (traits<F>::has_won(field, current_player)) {
        field.printboard();
        cout << "Congrats Player with the " << current_char
             << " stones. You Won!";
        return;
      }
      current_player = current_player == playfield::player1
                           ? playfield::player2
                           : playfield::player1;
    }
    field.printboard();
    cout << "It's a draw!";
  }
};

#endif // !GAME_H_
