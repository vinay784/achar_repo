#include "square.h"

Square::Square(double one,double two):Shapes(one ,two)
{

}

double Square::getArea()
{
    return (side1*side1);
}
