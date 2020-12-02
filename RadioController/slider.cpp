#include "slider.h"
#include "mainwindow.h"
slider::slider(QWidget *parent) : QMainWindow(parent)
{

}

void slider::VolumeLogic()
{
    ui->VolumeSlider->setValue(5);


}
