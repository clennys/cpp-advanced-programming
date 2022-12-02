#include <iostream>

#include "../include/dennys_playfield.h"
#include "../include/field_helper.h"
#include "../include/player.h"
#include "../include/player_factory.h"
#include "../include/playfield.h"

using namespace std;
void run(dennys_playfield &field, player *p1, player *p2) {
  int current_player = playfield::player1;
  char current_char;
  while (!field_helper<dennys_playfield>::is_full(field)) {
    field.printboard();
    current_char = current_player == playfield::player1 ? 'X' : 'O';
    cout << "Player with the " << current_char << " stones. Your turn!" << endl;
    current_player == playfield::player1
        ? field.insert_stone(p1->play(field), current_player)
        : field.insert_stone(p2->play(field), current_player);
    if (field_helper<dennys_playfield>::has_won(field, current_player)) {
      field.printboard();
      cout << "Congrats Player with the " << current_char
           << " stones. You Won!";
      return;
    }
    current_player = current_player == playfield::player1 ? playfield::player2
                                                          : playfield::player1;
  }
  field.printboard();
  cout << "It's a draw!";
}

int main() {
  player *p1 = PlayerFactory::getPlayer("human");
  player *p2 = PlayerFactory::getPlayer("dennys");

  auto field = dennys_playfield();

  run(field, p1, p2);
  return 0;
}
