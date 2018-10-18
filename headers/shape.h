#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"
#include <cmath>
#include <iostream>

class Shape{
    public:
        virtual float getArea() const = 0;
        virtual float getPerimeter() const = 0;
    protected:
    
};

#endif