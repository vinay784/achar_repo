#ifndef QSLIDER_H
#define QSLIDER_H

#include <QMainWindow>

class QSlider : public QMainWindow
{
    int i=0;
    Q_OBJECT
public:
    explicit QSlider(QWidget *parent = nullptr);
public slots:

    void funLogic(int i);
signals:

};

#endif // QSLIDER_H
