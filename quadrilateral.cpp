#include "headers/quadrilateral.h"
#include "headers/point.h"

#include <math.h>

Quadrilateral::Quadrilateral(Point* A, Point* B, Point* C, Point* D){
    _points[0] = A;
    _points[1] = B;
    _points[2] = C;
    _points[3] = D;
}

float Quadrilateral::getArea() const{
    float areaValue = ((_points[0]->getX()*_points[1]->getY()) - (_points[0]->getY()*_points[1]->getX()));
    areaValue += ((_points[1]->getX()*_points[2]->getY()) - (_points[1]->getY()*_points[2]->getX()));
    areaValue += ((_points[2]->getX()*_points[3]->getY()) - (_points[2]->getY()*_points[3]->getX()));
    areaValue += ((_points[3]->getX()*_points[0]->getY()) - (_points[3]->getY()*_points[0]->getX()));
    areaValue /= 2;
    areaValue = fabs(areaValue);
    return areaValue;
}

float Quadrilateral::getPerimeter() const{
    float perimeterValue = _points[0]->getDistance(_points[1]);
    perimeterValue += _points[1]->getDistance(_points[2]);
    perimeterValue += _points[2]->getDistance(_points[3]);
    perimeterValue += _points[3]->getDistance(_points[0]);
    return perimeterValue;
}