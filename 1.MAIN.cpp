#include <iostream>
#include <cmath>

#include "Dog.h"
using namespace std;




int main()
{
    Point a , b , c;
    a.setX(1);
    b.setX(2);
    c.setX(5);
    a.setY(3);
    b.setY(7);
    c.setY(9);

    int hp;
    cin>>hp;

    Dog Johnny(hp);

    Johnny.location.setX(5);
    Johnny.location.setY(7);

    Johnny.bark();


    cout<<a.distanceTo(b);
}
