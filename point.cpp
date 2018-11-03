#include "headers/point.h"
#include <iostream>

Point::Point(int x, int y): _x(x), _y(y) {
}

int Point::getX() const{
    return _x;
}

int Point::getY() const{
    return _y;
}

void Point::setX(int newX){
    _x = newX;
}

void Point::setY(int newY){
    _y = newY;
}

float Point::getDistance(Point* B) const{
    return sqrt( pow( ( B->getX() - _x ) ,2) + pow((B->getY() - _y),2) );
} 