#ifndef SQUARE_H
#define SQUARE_H

#include "shapes.h"
class Square:public Shapes
{
public:
    Square(double one, double two);
    double getArea();
};

#endif // SQUARE_H
