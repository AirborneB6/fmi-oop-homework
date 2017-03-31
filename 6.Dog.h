#ifndef DOG_H
#define DOG_H

#include "Creature.h"

class Dog : public Creature
{
    public:

    void bark ();
    Dog ();
    Dog (int _health);

};


#endif // DOG_H
