#ifndef _ex19_h
#define _ex19_h

#include "object.h"

// initialize 3 objects
// monsters
// rooms
// map

// monsters
struct Monster{
  Object proto;
  int hit_points;
};

typedef struct Monster Monster;

int Monster_attack(void *self, int damage);
int Monster_init(void *self);

// rooms

struct Room{
  Object proto;

  Monster *bad_guy;

  struct Room *north;
  struct Room *south;
  struct Room *east;
  struct Room *west;
};

typedef struct Room Room;

void *Room_move(void *self, Direction direction);
int Room_init(void *self);
int Room_attack(void *self, int damage);

// map

struct Map{
  Object proto;

  Room *start;
  Room *location;
};

typedef struct Map Map;

void *Map_move(void *self, Direction direction);
int Map_init(void *self);
int Map_attack(void *self, int damage);


#endif