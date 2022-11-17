#include <iostream>

#include "../include/dennys_ai.h"
#include "../include/game.h"
#include "../include/player.h"
#include "../include/playfield.h"

using namespace std;

int main() {
  AI<playfield> p1;
  AI<playfield> p2;
  game<playfield, AI<playfield>, AI<playfield>> game(p2, p1);
  game.run();

  return 0;
}
