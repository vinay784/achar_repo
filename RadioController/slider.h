#ifndef SLIDER_H
#define SLIDER_H
#include <slider.h>
#include <QMainWindow>

class slider : public QMainWindow
{
    Q_OBJECT
public:
    explicit slider(QWidget *parent = nullptr);

signals:
    void on_Plus_clicked();

};

#endif // SLIDER_H
