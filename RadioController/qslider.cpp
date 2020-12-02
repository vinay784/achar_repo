#include "qslider.h"
#include<QDebug>

using namespace std;
QSlider::QSlider(QWidget *parent) : QMainWindow(parent)
{


}

void QSlider::funLogic(int i)
{
    i=i+1;
    qDebug()<<"i="<<i<<endl;

}
