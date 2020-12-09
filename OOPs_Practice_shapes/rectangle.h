#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shapes.h"
class Rectangle : public Shapes
{
public:
    Rectangle(double one ,double two);
    double getArea();
};

#endif // RECTANGLE_H
