#ifndef POINT_H
#define POINT_H


class Point
{
    private:

    double xCoord;
    double yCoord;

    public:

    void setX(double _xCoord);

    void setY(double _yCoord);

    double getX();

    double getY();

    double distanceTo(Point other);

    Point();
    Point(double _xCoord , double _yCoord);
};



#endif // POINT_H
