#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "quadrilateral.h"

class Rectangle: public Quadrilateral{
    public:
        Rectangle(Point* A, Point* B, Point* C, Point* D);
    protected:
        int _measures[2];
        
};

#endif