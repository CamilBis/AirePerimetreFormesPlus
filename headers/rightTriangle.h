#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "triangle.h"

class RightTriangle: public Triangle{
    public:
        /**
         * Constructeur de triangle rectangle
         * @param A     Pointeur vers un point "A"
         * @param B     Pointeur vers un point "B"
         * @param C     Pointeur vers un point "C"
         * */
        RightTriangle(Point* A, Point* B, Point* C);
};

#endif