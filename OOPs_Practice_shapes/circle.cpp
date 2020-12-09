#include "circle.h"
#define PI 3.141592653589793238
CIrcle::CIrcle(double one,double two):Shapes(one,two)
{

}
double CIrcle::getArea()
{

    return (PI*(side1*side1));

}
