#include "headers/triangle.h"

Triangle::Triangle(Point* A, Point* B, Point* C){
    _points[0] = A;
    _points[1] = B;
    _points[2] = C;
}

float Triangle::getArea() const{
    float areaValue = ((_points[0]->getX()*_points[1]->getY()) - (_points[0]->getY()*_points[1]->getX()));
    areaValue += ((_points[1]->getX()*_points[2]->getY()) - (_points[1]->getY()*_points[2]->getX()));
    areaValue += ((_points[2]->getX()*_points[0]->getY()) - (_points[2]->getY()*_points[0]->getX()));
    areaValue = fabs(areaValue/2);
    return areaValue;
}

float Triangle::getPerimeter() const{
    float perimeterValue = _points[0]->getDistance(_points[1]);
    perimeterValue += _points[1]->getDistance(_points[2]);
    perimeterValue += _points[2]->getDistance(_points[0]);
    return perimeterValue;
}

bool Triangle::verifyRight() const{
    float measure1, measure2, measure3;
    
    measure1 = _points[0]->getDistance(_points[1]);
    measure2 = _points[1]->getDistance(_points[2]);
    measure3 = _points[2]->getDistance(_points[0]);

    if (pow(measure1,2) + pow(measure2,2) == pow(measure3,2) 
    || pow(measure1,2) + pow(measure3,2) == pow(measure2,2)
    || pow(measure3,2) + pow(measure2,2) == pow(measure1,2))
        return true;
    return false;
}