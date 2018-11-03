#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "quadrilateral.h"

class Rectangle: public Quadrilateral{
    public:
        /**
         * Constructeur de rectanglee
         * @param A     Pointeur vers un point "A"
         * @param B     Pointeur vers un point "B"
         * @param C     Pointeur vers un point "C"
         * @param D     Pointeur vers un point "D"
         * */
        Rectangle(Point* A, Point* B, Point* C, Point* D);
    protected:
        /** Tableau qui contient les 2 mesures des côtés */
        int _measures[2];
        
};

#endif