#include "headers/square.h"

Square::Square(Point* A, Point* B, Point* C, Point* D): Rectangle(A,B,C,D){
    if(_measures[0] != _measures[1]){
        std::cout << "Ceci n'est pas un carre!" << std::endl;
        return;
    }
}