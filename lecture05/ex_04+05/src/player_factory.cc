#include "../include/player_factory.h"
#include "../include/dennys_ai.h"
#include "../include/human_player.h"

PlayerFactory::PlayerFactory() {}

player *PlayerFactory::getPlayer(const std::string &type) {
  if (type == "human")
    return new human_player();
  else if (type == "dennys")
    return new AI();
  return NULL;
}
