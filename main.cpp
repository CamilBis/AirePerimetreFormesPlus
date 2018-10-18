#include <iostream>
#include "headers/point.h"
#include "headers/quadrilateral.h"
#include "headers/rectangle.h"

int main(){
    //DÉFINIR LES POINTS DANS LE SENS DES AIGUILLES D'UNE MONTRE!
    Point *p1 = new Point(1,1);
    Point *p2 = new Point(1,-1);
    Point *p3 = new Point(-2,-1);
    Point *p4 = new Point(-2,1);

    Quadrilateral quadri1(p1,p2,p3,p4);
    std::cout << "L'aire du quadrilateral est de: " << quadri1.getArea() << std::endl;
    std::cout << "Le perimetre du quadrilateral est de: " << quadri1.getPerimeter() << std::endl;
    return 0;

}