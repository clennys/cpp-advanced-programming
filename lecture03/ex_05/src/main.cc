#include <iostream>

#include "../include/game.h"
#include "../include/player.h"
#include "../include/playfield.h"

using namespace std;

int main() {
  player<playfield> p1;
  player<playfield> p2;
  game<playfield, player<playfield>, player<playfield>> game(p1, p2);
  game.run();

  return 0;
}
