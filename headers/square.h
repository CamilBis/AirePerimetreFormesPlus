#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square: public Rectangle{
    public:
        Square(Point* A, Point* B, Point* C, Point* D);
};

#endif