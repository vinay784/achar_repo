#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include <QSlider>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



//    ui->MainTab->addTab(new QWidget(),QString());
//      ui->MainTab->setTabIcon(2,QIcon(":/HighLightBeam.jpg"));

//    ui->MainTab->addTab(new QWidget(),QString());
//    ui->MainTab->setTabIcon(3,QIcon(":/Wiper.jpg"));

//    ui->MainTab->addTab(new QWidget(),QString());
//    ui->MainTab->setTabIcon(4,QIcon(":/CarNew.jpg"));


    ui->Left->setIcon(QIcon(":/Left"));
    ui->Right->setIcon((QIcon(":/RightArow")));
    ui->Minus->setIcon(QIcon(":/MInus.jpg"));
    ui->Plus->setIcon(QIcon(":/PlusSymbol.jpg"));

//Seat up push button configuration START
ui->SeatUP->setFixedHeight(50);
ui->SeatUP->setFixedWidth(50);
ui->SeatUP->setIcon(QIcon(":/PlusSymbol.jpg"));

QRect SeatUPrect(0,0,50,50);
QRegion SeatupRegion(SeatUPrect,QRegion::Ellipse);
ui->SeatUP->setMask(SeatupRegion);

//Seat Up Push button configuration END


//Seat Down push button configuration START
ui->SeatDown->setFixedHeight(50);
ui->SeatDown->setFixedWidth(50);
ui->SeatDown->setIcon(QIcon(":/MInus.jpg"));

QRect SeatDownrect(0,0,50,50);
QRegion SeatDownRegion(SeatDownrect,QRegion::Ellipse);
ui->SeatDown->setMask(SeatupRegion);
//Seat Down push button configuration End


//Seat DownUP configuration START
ui->DownUP->setFixedHeight(50);
ui->DownUP->setFixedWidth(50);
ui->DownUP->setIcon(QIcon(":/PlusSymbol.jpg"));

QRect DownUPrect(0,0,50,50);
QRegion DownUPregion(DownUPrect,QRegion::Ellipse);
ui->SeatUP->setMask(DownUPregion);
//Seat DownUP configuration END





//Seat Down configuration START
ui->Down->setFixedHeight(50);
ui->Down->setFixedWidth(50);
ui->Down->setIcon(QIcon(":/MInus.jpg"));

QRect Downrect(0,0,50,50);
QRegion Downregion(Downrect,QRegion::Ellipse);
ui->Down->setMask(Downregion);
//Seat Down configuration END


//BackRight  push button configuration STARTS
ui->BackRight->setFixedHeight(50);
ui->BackRight->setFixedWidth(50);
ui->BackRight->setIcon(QIcon(":/RightArow"));

QRect BackRightrect(0,0,50,50);
QRegion BackRightRegion(BackRightrect,QRegion::Ellipse);
ui->BackRight->setMask(BackRightRegion);

//BackRight push button configuration ENDS

//BackLeft PushButton configuration STARTS
ui->BackLeft->setFixedHeight(50);
ui->BackLeft->setFixedWidth(50);
ui->BackLeft->setIcon(QIcon(":/Left"));

QRect BackLeftrect(0,0,50,50);
QRegion BackLeftRegion(BackLeftrect,QRegion::Ellipse);
ui->BackLeft->setMask(BackLeftRegion);
//Back Left push Button configuraation ENDS


//Seat up push button configuration STARTS
ui->Backup->setFixedHeight(50);
ui->Backup->setFixedWidth(50);
ui->Backup->setIcon(QIcon(":/UP"));

QRect BackUprect(0,0,50,50);
QRegion BackUPRegion(BackUprect,QRegion::Ellipse);
ui->Backup->setMask(BackUPRegion);

//seat up push busson configuration ENDS


//Seat Down push button configuration STARTS
ui->BackDown->setFixedHeight(50);
ui->BackDown->setFixedWidth(50);
ui->BackDown->setIcon(QIcon(":/Down"));

QRect BackDownrect(0,0,50,50);
QRegion BackDownRegion(BackDownrect,QRegion::Ellipse);
ui->BackDown->setMask(BackDownRegion);

//seat down push button configuration ENDS




    connect(ui->Plus,SIGNAL(clicked()),this,SLOT(funLogic()));
    connect(ui->Minus,SIGNAL(clicked()),this,SLOT(DecLogic()));
    connect(ui->SpeedUP,SIGNAL(clicked()),this,SLOT(FanHigh()));
     connect(ui->SpeedDown,SIGNAL(clicked()),this,SLOT(FanLow()));
     connect(ui->VolumeUpAC,SIGNAL(clicked()),this,SLOT(tempDown()));
     connect(ui->VolumeDownAC,SIGNAL(clicked()),this,SLOT(tempHigh()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_channel1_clicked()
{
    qDebug()<<"Channel 1 clicked";
}

void MainWindow::on_channel2_clicked()
{
      qDebug()<<"Channel 2 clicked";
}

void MainWindow::on_channel3_clicked()
{
      qDebug()<<"Channel 3 clicked";
}

void MainWindow::on_channel4_clicked()
{
      qDebug()<<"Channel 4 clicked";
}

void MainWindow::on_channel5_clicked()
{
      qDebug()<<"Channel 5 clicked";
}

void MainWindow::on_channel6_clicked()
{
      qDebug()<<"Channel 6 clicked";
}

void MainWindow::on_scan_clicked()
{
    qDebug()<<"Scan clicked";
}

void MainWindow::on_SEEK_clicked()
{
    qDebug()<<"seek clicked";
}

void MainWindow::on_Left_clicked()
{
    qDebug()<<"Left arrow clicked";
}

void MainWindow::on_Right_clicked()
{
    qDebug()<<"Right arrow clicked";
}

void MainWindow::funLogic()
{
    ui->VolumeSlider->setValue(ui->VolumeSlider->value()+1);
}

void MainWindow::DecLogic()
{
    ui->VolumeSlider->setValue(ui->VolumeSlider->value()-1);
}

void MainWindow::FanLow()
{
ui->FanSlider->setValue(ui->FanSlider->value()+34);
}

void MainWindow::FanHigh()
{
ui->FanSlider->setValue(ui->FanSlider->value()-34);
}

void MainWindow::tempDown()
{
ui->TemperatureSlider->setValue(ui->TemperatureSlider->value()-2);
}

void MainWindow::tempHigh()
{
ui->TemperatureSlider->setValue(ui->TemperatureSlider->value()+2);
}

void MainWindow::on_FrontDefroster_clicked()
{
    qDebug()<<"Front Defroster clicked "<<endl;
}

void MainWindow::on_SideDfroster_clicked()
{
    qDebug()<<"side defroster clicked"<<endl;
}

void MainWindow::on_MirrorDefroster_clicked()
{
    qDebug()<<"Mirror defroster clicked"<<endl;
}

void MainWindow::on_SNOW_clicked()
{
    qDebug()<<"snow CLICKED"<<endl;
}



void MainWindow::on_SeatUP_clicked()
{
    qDebug()<<"Seat up CLICKED"<<endl;
}

void MainWindow::on_SeatDown_clicked()
{
    qDebug()<<"Seat Down CLICKED"<<endl;
}

void MainWindow::on_DownUP_clicked()
{
    qDebug()<<" Down UP CLICKED"<<endl;
}

void MainWindow::on_Down_clicked()
{
    qDebug()<<" Down CLICKED"<<endl;
}
