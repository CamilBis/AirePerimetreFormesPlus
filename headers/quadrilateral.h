#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include <math.h>
#include "Shape.h"
#include "point.h"

class Quadrilateral: public Shape{
    public:
        Quadrilateral(Point* A, Point* B, Point* C, Point* D);
        float getArea() const;
        float getPerimeter() const;
    protected:
        Point* _points[4];
};

#endif