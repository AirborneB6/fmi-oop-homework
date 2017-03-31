#include "Triangle.h"
void Triangle::setArea()
{
    double semiPerimeter = ( this->a.length + this->b.length + this->c.length ) / 2 ;
    this->area = sqrt( semiPerimeter*(semiPerimeter - a.length)*(semiPerimeter - b.length)*(semiPerimeter - c.length) );
}

Triangle::Triangle (Point _A , Point _B , Point _C)
{
    Line _AB( _A , _B);
    Line _BC( _B , _C);
    Line _CA( _C , _A);

    this->a = _BC;
    this->b = _CA;
    this->c = _AB;

    this->A = _A;
    this->B = _B;
    this->C = _C;

    setArea();
}
