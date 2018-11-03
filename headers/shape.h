#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"
#include <cmath>
#include <iostream>
#include <string>

class Shape{
    public:
        /** Fonction virtuelle servant à calculer l'aire
         *                                   d'une forme.
         * 
         * Sera définie dans les classes enfants */

        virtual float getArea() const = 0;
        
        /** Fonction virtuelle servant à calculer l'aire
         *                                   d'une forme.
         * 
         * Sera définie dans les classes enfants */
        virtual float getPerimeter() const = 0;
};

#endif