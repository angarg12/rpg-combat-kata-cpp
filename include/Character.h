#ifndef RPG_COMBAT_KATA
#define RPG_COMBAT_KATA

class Character
{
  int health;
  int level;
  bool alive;

public:
  Character();
  int getHealth();
  int getLevel();
  bool isAlive();
};

#endif

