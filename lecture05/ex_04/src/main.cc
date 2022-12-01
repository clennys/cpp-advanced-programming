#include <iostream>

#include "../include/dennys_ai.h"
#include "../include/game.h"
#include "../include/player.h"
#include "../include/playfield.h"

// Joe Bauer
#include "../include/computer_player.h"

using namespace std;

int main() {
  AI<playfield> p1;
  // AI<playfield> p2;
  player<playfield> p2;
  // computer_player<playfield> p2;
  game<playfield, AI<playfield>, player<playfield>> game(p1, p2);
  // game<playfield, AI<playfield>, computer_player<playfield>> game(p1, p2);
  game.run();

  return 0;
}
