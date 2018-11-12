#include "headers/rightTriangle.h"

RightTriangle::RightTriangle(Point* A, Point* B, Point* C): Triangle(A,B,C){
    if(!verifyRight()){ //Si le triangle n'est pas droit...
        throw std::runtime_error("Ceci n'est pas un triangle rectangle!");
    }
}