#ifndef POINT_H
#define POINT_H

#include <cmath>

class Point{
    public:
        Point(int x, int y);
        int getX();
        int getY();
        void setX(int newX);
        void setY(int newY);
        float getDistance(Point* B);
    private:
        int _x;
        int _y;
};

#endif