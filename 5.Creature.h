#ifndef CREATURE_H
#define CREATURE_H

#include "Point.h"
#include <iostream>

class Creature
{
    public:

    Point location;
    unsigned short int health;
    bool alive;
    bool invulnerable;

    void regenHealth();
    bool damageBy (int amount);


};

#endif // CREATURE_H
