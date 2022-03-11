#include "Character.h"

Character::Character()
{
    health = 1000;
    level = 1;
    alive = true;
}

int Character::getHealth()
{
  return health;
}

int Character::getLevel()
{
  return level;
}

bool Character::isAlive()
{
  return alive;
}