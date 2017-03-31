#include "Creature.h"

void Creature::regenHealth()
{
    if ( this->health < 100 )
    {
        this->health = 100;
    }
    else
    {
        std::cout<<"Health is full!";
    }
}
bool Creature::damageBy (int amount)
{
    if (this->invulnerable)
    {
        std::cout << "Target is invulnerable!";
        return 0;
    }
    else if (amount >= this->health)
    {
        std::cout<< "Target was killed!";
        this->health = 0;
        this->alive = 0;
        return 1;
    }
    else
    {
        this->health -= amount;
        return 1;
    }
}
