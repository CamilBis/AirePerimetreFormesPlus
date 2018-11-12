#include "headers/rectangle.h"

Rectangle::Rectangle(Point* A, Point* B, Point* C, Point* D): Quadrilateral(A,B,C,D){
    if(A->getX() == B->getX()){ //Si le quadrilatère n'est pas un rectangle...
        _measures[0] = A->getX() - B->getX();
    } else {
        std::cout << "Ceci n'est pas un rectangle!" << std::endl;
        return;
    }
    if(B->getY() == C->getY()){
        _measures[1] = B->getX() - C->getX();
    } else {
        std::cout << "Ceci n'est pas un rectangle!" << std::endl;
        return;
    }
    if(C->getX() != D->getX()){
        std::cout << "Ceci n'est pas un rectangle!" << std::endl;
        return;
    }
    if(D->getY() != A->getY()){
        std::cout << "Ceci n'est pas un rectangle!" << std::endl;
        return;
    }
}
