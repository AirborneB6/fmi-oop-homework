#ifndef LINE_H
#define LINE_H

#include "Point.h"

class Line
{
    public:
    Point A , B;
    double length;

    Line (Point _A , Point _B);
    Line();

};




#endif // LINE_H
