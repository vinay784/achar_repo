#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//       ui->dummy->setText("Dummy");
//       ui->dummy->setFixedHeight(100);
//       ui->dummy->setFixedWidth(100);
//       QRect rect(0,0,40,40);
//       qDebug() << rect.size();
//       qDebug() << ui->dummy->size();
//       QRegion region(rect, QRegion::Ellipse);
//       qDebug() << region.boundingRect().size();
//       ui->dummy->setMask(region);


    ui->Minus_2->setFixedHeight(30);
    ui->Minus_2->setFixedWidth(30);
    ui->Minus_2->setIcon(QIcon(":/images.png"));

    ui->dummy->setFixedHeight(30);
    ui->dummy->setFixedWidth(30);
    ui->dummy->setIcon(QIcon(":/images.png"));


    QRect rect(0,0,30,30);
    QRegion region(rect,QRegion::Ellipse);
    ui->Minus_2->setMask(region);

    QRect DummyRect(0,0,30,30);
    QRegion regionDummy(DummyRect,QRegion::Ellipse);
    ui->dummy->setMask(region);





}
Widget::~Widget()
{
    delete ui;
}

