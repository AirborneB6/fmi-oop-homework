#include "Point.h"
#include <cmath>

void Point::setX(double _xCoord)
{
    this->xCoord = _xCoord;
}
void Point::setY(double _yCoord)
{
    this->yCoord = _yCoord;
}
double Point::getX()
{
    return this->xCoord;
}
double Point::getY()
{
    return this->yCoord;
}

double Point::distanceTo(Point other)
{
    double xDiff = this->xCoord - other.xCoord;
    double yDiff = this->yCoord - other.yCoord;
    return sqrt( pow(xDiff,2) + pow(yDiff,2) );
}

Point::Point(double _xCoord , double _yCoord)
{
    this->xCoord = _xCoord;
    this->yCoord = _yCoord;
}

Point::Point()
{
    this->xCoord = 0;
    this->yCoord = 0;
}
