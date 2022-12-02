#ifndef PLAYER_FACTORY_H_
#define PLAYER_FACTORY_H_

#include "player.h"

using namespace std;

class PlayerFactory {
public:
  PlayerFactory();

  static player *getPlayer(const string &type);
};

#endif // !PLAYER_FACTORY_H_
