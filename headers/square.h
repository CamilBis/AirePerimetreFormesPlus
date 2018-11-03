#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square: public Rectangle{
    public:
        /** Constructeur de carré
         * @param A     Pointeur vers un point "A"
         * @param B     Pointeur vers un point "B"
         * @param C     Pointeur vers un point "C"
         * @param D     Pointeur vers un point "D"
         * */
        Square(Point* A, Point* B, Point* C, Point* D);
};

#endif