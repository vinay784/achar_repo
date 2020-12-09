#include "triangle.h"

Triangle::Triangle(double one,double two):Shapes(one,two)
{

}

double Triangle::getArea()
{
    return (0.5)*side1*side2;
}
