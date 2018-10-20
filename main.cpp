#include <iostream>
#include "headers/point.h"
#include "headers/quadrilateral.h"
#include "headers/rectangle.h"
#include "headers/square.h"
#include "headers/triangle.h"
#include "headers/rightTriangle.h"

int main(){
    //DÉFINIR LES POINTS DANS LE SENS DES AIGUILLES D'UNE MONTRE!
    Point *p1 = new Point(1,1);
    Point *p2 = new Point(1,-1);
    Point *p3 = new Point(-2,-1);
    Point *p4 = new Point(-2,1);

    std::cout << "-----------------------------------------------------" << std::endl;

    Quadrilateral quadri1(p1,p2,p3,p4);
    std::cout << "L'aire du quadrilateral est de: " << quadri1.getArea() << std::endl;
    std::cout << "Le perimetre du quadrilateral est de: " << quadri1.getPerimeter() << std::endl;

    std::cout << "-----------------------------------------------------" << std::endl;

    Rectangle rec1(p1,p2,p3,p4);
    std::cout << "L'aire du rectangle est de: " << rec1.getArea() << std::endl;
    std::cout << "Le perimetre du rectangle est de: " << rec1.getPerimeter() << std::endl;

    std::cout << "-----------------------------------------------------" << std::endl;

    Square squ1(p1,p2,p3,p4);
    std::cout << "L'aire du carre est de: " << squ1.getArea() << std::endl;
    std::cout << "Le perimetre du carre est de: " << squ1.getPerimeter() << std::endl;

    std::cout << "-----------------------------------------------------" << std::endl;

    Triangle tri1(p1,p2,p3);
    std::cout << "L'aire du triangle est de: " << tri1.getArea() << std::endl;
    std::cout << "Le perimetre du triangle est de: " << tri1.getPerimeter() << std::endl;

    std::cout << "-----------------------------------------------------" << std::endl;

    RightTriangle rtr1(p1,p2,p3);
    std::cout << "L'aire du triangle est de: " << rtr1.getArea() << std::endl;
    std::cout << "Le perimetre du triangle est de: " << rtr1.getPerimeter() << std::endl;

    std::cout << "-----------------------------------------------------" << std::endl;

    return 0;



}