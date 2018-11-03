#ifndef POINT_H
#define POINT_H

#include <cmath>


class Point{
    public:
        /**
         * Constructeur de Points
         * @param x   valeur de x
         * @param y   valeur de y
         * */
        Point(int x, int y);

        /**
         * Permet d'avoir la valeur de x
         * @return  valeur de x
         * */
        int getX() const;

        /**
         * Permet d'avoir la valeur de y
         * @return  valeur de y
         * */
        int getY() const;

        /**
         * Changer la valeur de x
         * @param newX  nouvelle valeur de x
         * */
        void setX(int newX);

        /**
         * Changer la valeur de y
         * @param newY  nouvelle valeur de y
         * */
        void setY(int newY);

        /**
         * Avoir la distance de ce point p/r à un autre
         * @param B   pointeur vers un autre point
         * */
        float getDistance(Point* B) const;
    private:
        /** Valeur de x */
        int _x; 

        /** Valeur de y */
        int _y;
};

#endif