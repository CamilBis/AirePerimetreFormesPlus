#ifndef POINT_H
#define POINT_H

class Point{
    public:
        Point(int x, int y);
        int getX();
        int getY();
        void setX(int newX);
        void setY(int newY);
    private:
        int _x;
        int _y;
};

#endif