#include "point.h"
#include <iostream>

Point::Point(int x, int y): _x(x), _y(y) {
}

int Point::getX(){
    return _x;
}

int Point::getY(){
    return _y;
}

void Point::setX(int newX){
    _x = newX;
}

void Point::setY(int newY){
    _y = newY;
}