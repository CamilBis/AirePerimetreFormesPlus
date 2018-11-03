#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle: public Shape{
    public:
        /** Constructeur de triangle
         * @param A     Pointeur vers un point "A"
         * @param B     Pointeur vers un point "B"
         * @param C     Pointeur vers un point "C"
         * */
        Triangle(Point* A, Point* B, Point* C);

        /**
         * Avoir l'aire d'un triangle
         * Algorithme de shoelace
         * @return      aire du triangle
         * */
        float getArea() const;

        /**
         * Avoir le périmètre d'un triangle
         * @return      périmètre du triangle
         * */
        float getPerimeter() const;
    protected:
        /**
         * Tableau de pointeurs de points
         * Contient les coordonnées des points formant
         *          le triangle
         * */
        Point* _points[3];

        /**
         * Permet de vérifier si un triangle est rectangle
         * Sera utilisée dans le constructeur de RightTriabgle
         * @return      rectangle (true) ou non (false)
         * */
        bool verifyRight() const;
};

#endif
