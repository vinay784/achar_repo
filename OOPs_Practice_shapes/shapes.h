#ifndef SHAPES_H
#define SHAPES_H


class Shapes
{
protected:
    double side1;
    double side2;
public:
    Shapes(double one,double two);
  virtual  double getArea()=0;

};



#endif // SHAPES_H
