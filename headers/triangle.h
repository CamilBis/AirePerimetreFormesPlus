#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle: public Shape{
    public:
        Triangle(Point* A, Point* B, Point* C);
        float getArea() const;
        float getPerimeter() const;
    protected:
        Point* _points[3];
        bool verifyRight() const;
};

#endif
