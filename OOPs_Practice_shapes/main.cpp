#include <iostream>
#include "shapes.h"
#include "rectangle.h"
#include "triangle.h"
#include "square.h"
#include "circle.h"
using namespace std;

int main()
{
 double one,two;
cout<<"Enter the sides of rectangle to find the Area:"<<endl;
cin>>one>>two;
Rectangle rec(one,two);
cout<<"The area of rectangle is: "<< rec.getArea()<<endl;
cout<<"Enter the base and height  values for Triangle"<<endl;
cin>>one>>two;
Triangle tri(one,two);
cout<<"Area of triangle is: "<<tri.getArea()<<endl;

cout<<"Enter the side of a sqaure to find the area :"<<endl;
cin>>one>>two;
Square sq(one,two);
cout<<"The area of the square  for given "<<one <<" side is:"<<sq.getArea()<<endl;

cout<<"Enter the radius of a cirlce to find the area:"<<endl;
cin>>one>>two;
CIrcle cir(one,two);
cout<<"The area of cirlce for radius"<<one<<"is:"<<cir.getArea()<<endl;
return 0;
}
