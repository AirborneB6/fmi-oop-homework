#include "Dog.h"


void Dog::bark ()
    {
        if (this->alive)
        {
            std::cout<<"WOOF WOOF.\n";
        }
        else
        {
            std::cout<<"rip.\n";
        }
    }

    Dog::Dog()
    {
        this->alive = 1;
        this->health = 100;
        this->invulnerable = 0;
    }
    Dog::Dog( int _health )
    {
        if ( _health > 0 )
        {
            this->alive = 1;
        }
        else
        {
            this->alive = 0;
        }
        this->health = _health;
        this->invulnerable = 0;
    }
