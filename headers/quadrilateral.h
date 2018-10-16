#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include <math.h>
#include "Shape.h"
#include "point.h"

class Quadrilateral: public Shape{
    public:
        Quadrilateral(Point A, Point B, Point C, Point D);
    protected:
        Point _pointA;
        Point _pointB;
        Point _pointC;
        Point _pointD;
};

#endif