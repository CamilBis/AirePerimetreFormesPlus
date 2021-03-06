#include "headers/triangle.h"

Triangle::Triangle(Point* A, Point* B, Point* C){

    /* Définir les points du constructeur dans
            le tableau de pointeurs de nombres */

    _points[0] = A;
    _points[1] = B;
    _points[2] = C;
}

float Triangle::getArea() const{
    /* Calculer l'aire de n'importe quel triangle
    Algorithme de shoelace */

    float areaValue = ((_points[0]->getX()*_points[1]->getY()) - (_points[0]->getY()*_points[1]->getX()));
    areaValue += ((_points[1]->getX()*_points[2]->getY()) - (_points[1]->getY()*_points[2]->getX()));
    areaValue += ((_points[2]->getX()*_points[0]->getY()) - (_points[2]->getY()*_points[0]->getX()));
    areaValue = fabs(areaValue/2);
    return areaValue;
}

float Triangle::getPerimeter() const{
    /* Addition de toutes les mesures de chaque côté
       Mesure des côtés:
        point getDistance autrePoint */
    float perimeterValue = _points[0]->getDistance(_points[1]);
    perimeterValue += _points[1]->getDistance(_points[2]);
    perimeterValue += _points[2]->getDistance(_points[0]);
    return perimeterValue;
}

bool Triangle::verifyRight() const{
    /* Permet de vérifier si un triangle est rectangle
    Formule: Pythagore (a² + b² = c²) */

    float measures[3];
    measures[0] = pow(_points[0]->getDistance(_points[1]),2);
    measures[1] = pow(_points[1]->getDistance(_points[2]),2);
    measures[2] = pow(_points[2]->getDistance(_points[0]),2);
    return measures[1] + measures[2] == measures[3] ||
        measures[2] + measures[3] == measures[1] ||
        measures[1] + measures[3] == measures[2];
    return false;
}