#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include "Line.h"
#include <cmath>
class Triangle
{
    public:

    Point A , B , C ;
    Line a , b , c;

    double area;

    void setArea();

    Triangle (Point _A , Point _B , Point _C);

};

#endif // TRIANGLE_H
