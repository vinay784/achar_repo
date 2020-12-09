#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shapes.h"

class Triangle : public Shapes
{
public:
    Triangle(double base,double height);
    double getArea();
};

#endif // TRIANGLE_H
