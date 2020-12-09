#include "rectangle.h"
#include "shapes.h"

Rectangle::Rectangle(double one, double two):Shapes(one,two)
{

}

double Rectangle::getArea()
{
    return side1*side2;
}
