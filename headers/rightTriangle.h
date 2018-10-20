#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "triangle.h"

class RightTriangle: public Triangle{
    public:
        RightTriangle(Point* A, Point* B, Point* C);
};

#endif