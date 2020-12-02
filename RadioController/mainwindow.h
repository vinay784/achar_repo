#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
int i=0;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_channel1_clicked();

    void on_channel2_clicked();

    void on_channel3_clicked();

    void on_channel4_clicked();

    void on_channel5_clicked();

    void on_channel6_clicked();

    void on_scan_clicked();

    void on_SEEK_clicked();

    void on_Left_clicked();

    void on_Right_clicked();
    void funLogic();
    void DecLogic();
    void FanLow();
    void FanHigh();
    void tempDown();
    void tempHigh();

private slots:
    void on_FrontDefroster_clicked();

    void on_SideDfroster_clicked();

    void on_MirrorDefroster_clicked();

    void on_SNOW_clicked();

    void on_SeatUP_clicked();

    void on_SeatDown_clicked();

    void on_DownUP_clicked();

    void on_Down_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
