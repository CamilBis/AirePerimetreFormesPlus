#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include <math.h>
#include "Shape.h"
#include "point.h"

class Quadrilateral: public Shape{
    public:
        /**
         * Constructeur de quadrilatères
         * @param A     Pointeur vers un point "A"
         * @param B     Pointeur vers un point "B"
         * @param C     Pointeur vers un point "C"
         * @param D     Pointeur vers un point "D"
         * */
        Quadrilateral(Point* A, Point* B, Point* C, Point* D);

        /**
         * Avoir l'aire d'un quadrilastère
         * Algorithme de shoelace
         * @return      aire du quadrilatère
         * */
        float getArea() const;

        /**
         * Avoir le périmètre d'un quadrilatère
         * @return      perimètre du quadrilatère
         * */
        float getPerimeter() const;
    protected:
        /** Tableau qui stock les 4 points du quadrilatère */
        Point* _points[4];
};

#endif