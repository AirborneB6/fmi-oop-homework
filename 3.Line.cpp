#include "Line.h"
#include "Point.h"


Line::Line (Point _A , Point _B)
{
    this->A = _A;
    this->B = _B;
    this->length = _A.distanceTo(_B);
}

Line::Line()
{
    Point _A(0 , 0);
    Point _B(0 , 0);
    this->A = _A;
    this->B = _B;
    this->length = 0;
}
