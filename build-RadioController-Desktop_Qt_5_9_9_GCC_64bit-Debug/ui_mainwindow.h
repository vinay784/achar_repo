/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *Background;
    QTabWidget *MainTab;
    QWidget *widget;
    QPushButton *channel1;
    QPushButton *channel2;
    QPushButton *channel3;
    QPushButton *channel4;
    QPushButton *channel5;
    QPushButton *channel6;
    QPushButton *scan;
    QPushButton *SEEK;
    QPushButton *Left;
    QPushButton *Right;
    QPushButton *Minus;
    QPushButton *Plus;
    QSlider *VolumeSlider;
    QWidget *Temperature;
    QPushButton *FrontDefroster;
    QLabel *label;
    QPushButton *SideDfroster;
    QPushButton *MirrorDefroster;
    QPushButton *SNOW;
    QScrollBar *FanSlider;
    QScrollBar *TemperatureSlider;
    QPushButton *SpeedUP;
    QPushButton *VolumeUpAC;
    QPushButton *SpeedDown;
    QPushButton *VolumeDownAC;
    QWidget *Beam;
    QWidget *Wiper;
    QWidget *Seating;
    QPushButton *Backup;
    QPushButton *BackDown;
    QPushButton *BackLeft;
    QPushButton *BackRight;
    QPushButton *DownUP;
    QPushButton *Down;
    QPushButton *SeatUP;
    QPushButton *SeatDown;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1512, 997);
        QIcon icon;
        icon.addFile(QStringLiteral(":/RadioIcon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/Background.jpg);"));
        Background = new QWidget(MainWindow);
        Background->setObjectName(QStringLiteral("Background"));
        MainTab = new QTabWidget(Background);
        MainTab->setObjectName(QStringLiteral("MainTab"));
        MainTab->setGeometry(QRect(0, -10, 1791, 1001));
        MainTab->setFocusPolicy(Qt::StrongFocus);
        MainTab->setContextMenuPolicy(Qt::NoContextMenu);
        MainTab->setStyleSheet(QStringLiteral(""));
        MainTab->setIconSize(QSize(275, 150));
        MainTab->setElideMode(Qt::ElideLeft);
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        channel1 = new QPushButton(widget);
        channel1->setObjectName(QStringLiteral("channel1"));
        channel1->setGeometry(QRect(140, 80, 111, 71));
        channel1->setStyleSheet(QLatin1String("QPushButton:!hover{\n"
"	color: rgb(238, 238, 236);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-width:50px;\n"
"}"));
        channel2 = new QPushButton(widget);
        channel2->setObjectName(QStringLiteral("channel2"));
        channel2->setGeometry(QRect(350, 80, 111, 71));
        channel2->setStyleSheet(QLatin1String("QPushButton:!hover{\n"
"	color: rgb(238, 238, 236);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-width:50px;\n"
"}"));
        channel3 = new QPushButton(widget);
        channel3->setObjectName(QStringLiteral("channel3"));
        channel3->setGeometry(QRect(560, 80, 111, 71));
        channel3->setStyleSheet(QLatin1String("QPushButton:!hover{\n"
"	color: rgb(238, 238, 236);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-width:50px;\n"
"}"));
        channel4 = new QPushButton(widget);
        channel4->setObjectName(QStringLiteral("channel4"));
        channel4->setGeometry(QRect(770, 80, 111, 71));
        channel4->setStyleSheet(QLatin1String("QPushButton:!hover{\n"
"	color: rgb(238, 238, 236);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-width:50px;\n"
"}"));
        channel5 = new QPushButton(widget);
        channel5->setObjectName(QStringLiteral("channel5"));
        channel5->setGeometry(QRect(980, 80, 111, 71));
        channel5->setStyleSheet(QLatin1String("QPushButton:!hover{\n"
"	color: rgb(238, 238, 236);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-width:50px;\n"
"}"));
        channel6 = new QPushButton(widget);
        channel6->setObjectName(QStringLiteral("channel6"));
        channel6->setGeometry(QRect(1190, 80, 111, 71));
        channel6->setStyleSheet(QLatin1String("QPushButton:!hover{\n"
"	color: rgb(238, 238, 236);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-width:50px;\n"
"}"));
        scan = new QPushButton(widget);
        scan->setObjectName(QStringLiteral("scan"));
        scan->setGeometry(QRect(240, 260, 121, 41));
        scan->setStyleSheet(QLatin1String("background-color: rgba(230, 230, 230,85%);\n"
"color: rgb(252, 252, 252);"));
        SEEK = new QPushButton(widget);
        SEEK->setObjectName(QStringLiteral("SEEK"));
        SEEK->setGeometry(QRect(960, 260, 121, 41));
        SEEK->setStyleSheet(QLatin1String("background-color: rgba(230, 230, 230,85%);\n"
"color: rgb(252, 252, 252);"));
        Left = new QPushButton(widget);
        Left->setObjectName(QStringLiteral("Left"));
        Left->setGeometry(QRect(420, 340, 57, 57));
        Left->setStyleSheet(QLatin1String("QPushButton:\n"
"{\n"
"border-style:solid;\n"
"border-width:2px;\n"
"padding:5px;\n"
"background-color: rgb(85, 87, 83);\n"
"border-radius:20px;\n"
"\n"
"};"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Left"), QSize(), QIcon::Normal, QIcon::Off);
        Left->setIcon(icon1);
        Left->setIconSize(QSize(40, 40));
        Right = new QPushButton(widget);
        Right->setObjectName(QStringLiteral("Right"));
        Right->setGeometry(QRect(820, 340, 57, 57));
        Right->setStyleSheet(QLatin1String("#{\n"
"QPushButton:\n"
"color: rgb(0, 0, 0);\n"
"  padding: 80px;\n"
"border-Radius:50%\n"
"}\n"
"QPushButton:\n"
"border-Radius:50%;\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/RightArow"), QSize(), QIcon::Normal, QIcon::Off);
        Right->setIcon(icon2);
        Right->setIconSize(QSize(40, 40));
        Minus = new QPushButton(widget);
        Minus->setObjectName(QStringLiteral("Minus"));
        Minus->setGeometry(QRect(530, 450, 51, 41));
        Minus->setStyleSheet(QLatin1String("QPushButton:\n"
"{\n"
"border-style:solid;\n"
"padding:5px;\n"
"background-color: rgb(85, 87, 83);\n"
"border-radius:20px;\n"
"\n"
"};"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MInus.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Minus->setIcon(icon3);
        Minus->setIconSize(QSize(50, 50));
        Plus = new QPushButton(widget);
        Plus->setObjectName(QStringLiteral("Plus"));
        Plus->setGeometry(QRect(730, 450, 51, 41));
        Plus->setStyleSheet(QLatin1String("QPushButton:\n"
"{\n"
"border-style:solid;\n"
"padding:5px;\n"
"background-color: rgb(85, 87, 83);\n"
"border-radius:20px;\n"
"\n"
"};"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/PlusSymbol.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Plus->setIcon(icon4);
        Plus->setIconSize(QSize(50, 50));
        VolumeSlider = new QSlider(widget);
        VolumeSlider->setObjectName(QStringLiteral("VolumeSlider"));
        VolumeSlider->setGeometry(QRect(460, 550, 431, 20));
        VolumeSlider->setMinimum(0);
        VolumeSlider->setMaximum(100);
        VolumeSlider->setPageStep(10);
        VolumeSlider->setValue(0);
        VolumeSlider->setSliderPosition(0);
        VolumeSlider->setTracking(true);
        VolumeSlider->setOrientation(Qt::Horizontal);
        VolumeSlider->setTickPosition(QSlider::TicksAbove);
        VolumeSlider->setTickInterval(1);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/MusicIcon@2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainTab->addTab(widget, icon5, QString());
        Temperature = new QWidget();
        Temperature->setObjectName(QStringLiteral("Temperature"));
        FrontDefroster = new QPushButton(Temperature);
        FrontDefroster->setObjectName(QStringLiteral("FrontDefroster"));
        FrontDefroster->setGeometry(QRect(260, 70, 121, 51));
        FrontDefroster->setStyleSheet(QStringLiteral("background-image: url(:/windscreen-defrost.png);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/windscreen-defrost.png"), QSize(), QIcon::Normal, QIcon::Off);
        FrontDefroster->setIcon(icon6);
        FrontDefroster->setIconSize(QSize(80, 80));
        label = new QLabel(Temperature);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 60, 111, 61));
        label->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        SideDfroster = new QPushButton(Temperature);
        SideDfroster->setObjectName(QStringLiteral("SideDfroster"));
        SideDfroster->setGeometry(QRect(460, 70, 121, 51));
        SideDfroster->setStyleSheet(QStringLiteral("background-image: url(:/mirror defroster.jpg);"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/mirror defroster.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SideDfroster->setIcon(icon7);
        SideDfroster->setIconSize(QSize(75, 75));
        MirrorDefroster = new QPushButton(Temperature);
        MirrorDefroster->setObjectName(QStringLiteral("MirrorDefroster"));
        MirrorDefroster->setGeometry(QRect(660, 70, 121, 51));
        MirrorDefroster->setStyleSheet(QLatin1String("background-image: url(:/Wiper.jpg);\n"
""));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Wiper.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MirrorDefroster->setIcon(icon8);
        MirrorDefroster->setIconSize(QSize(100, 100));
        SNOW = new QPushButton(Temperature);
        SNOW->setObjectName(QStringLiteral("SNOW"));
        SNOW->setGeometry(QRect(870, 70, 101, 91));
        SNOW->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/snow.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SNOW->setIcon(icon9);
        SNOW->setIconSize(QSize(100, 100));
        FanSlider = new QScrollBar(Temperature);
        FanSlider->setObjectName(QStringLiteral("FanSlider"));
        FanSlider->setGeometry(QRect(120, 250, 16, 160));
        FanSlider->setMinimum(0);
        FanSlider->setMaximum(100);
        FanSlider->setSingleStep(25);
        FanSlider->setOrientation(Qt::Vertical);
        FanSlider->setInvertedControls(false);
        TemperatureSlider = new QScrollBar(Temperature);
        TemperatureSlider->setObjectName(QStringLiteral("TemperatureSlider"));
        TemperatureSlider->setGeometry(QRect(830, 250, 16, 160));
        TemperatureSlider->setMinimum(60);
        TemperatureSlider->setMaximum(84);
        TemperatureSlider->setSingleStep(1);
        TemperatureSlider->setPageStep(1);
        TemperatureSlider->setSliderPosition(84);
        TemperatureSlider->setOrientation(Qt::Vertical);
        SpeedUP = new QPushButton(Temperature);
        SpeedUP->setObjectName(QStringLiteral("SpeedUP"));
        SpeedUP->setGeometry(QRect(170, 430, 51, 41));
        SpeedUP->setStyleSheet(QLatin1String("QPushButton:\n"
"{\n"
"border-style:solid;\n"
"padding:5px;\n"
"background-color: rgb(85, 87, 83);\n"
"border-radius:20px;\n"
"\n"
"};"));
        SpeedUP->setIcon(icon4);
        SpeedUP->setIconSize(QSize(50, 50));
        VolumeUpAC = new QPushButton(Temperature);
        VolumeUpAC->setObjectName(QStringLiteral("VolumeUpAC"));
        VolumeUpAC->setGeometry(QRect(880, 430, 51, 41));
        VolumeUpAC->setStyleSheet(QLatin1String("QPushButton:\n"
"{\n"
"border-style:solid;\n"
"padding:5px;\n"
"background-color: rgb(85, 87, 83);\n"
"border-radius:20px;\n"
"\n"
"};"));
        VolumeUpAC->setIcon(icon4);
        VolumeUpAC->setIconSize(QSize(50, 50));
        SpeedDown = new QPushButton(Temperature);
        SpeedDown->setObjectName(QStringLiteral("SpeedDown"));
        SpeedDown->setGeometry(QRect(40, 430, 51, 41));
        SpeedDown->setStyleSheet(QLatin1String("QPushButton:\n"
"{\n"
"border-style:solid;\n"
"padding:5px;\n"
"background-color: rgb(85, 87, 83);\n"
"border-radius:20px;\n"
"\n"
"};"));
        SpeedDown->setIcon(icon3);
        SpeedDown->setIconSize(QSize(50, 50));
        VolumeDownAC = new QPushButton(Temperature);
        VolumeDownAC->setObjectName(QStringLiteral("VolumeDownAC"));
        VolumeDownAC->setGeometry(QRect(760, 430, 51, 41));
        VolumeDownAC->setStyleSheet(QLatin1String("QPushButton:\n"
"{\n"
"border-style:solid;\n"
"padding:5px;\n"
"background-color: rgb(85, 87, 83);\n"
"border-radius:20px;\n"
"\n"
"};"));
        VolumeDownAC->setIcon(icon3);
        VolumeDownAC->setIconSize(QSize(50, 50));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/ThermoMtr.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainTab->addTab(Temperature, icon10, QString());
        Beam = new QWidget();
        Beam->setObjectName(QStringLiteral("Beam"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/HighLightBeam.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon11.addFile(QStringLiteral(":/HighLightBeam.jpg"), QSize(), QIcon::Active, QIcon::On);
        MainTab->addTab(Beam, icon11, QString());
        Wiper = new QWidget();
        Wiper->setObjectName(QStringLiteral("Wiper"));
        MainTab->addTab(Wiper, icon8, QString());
        Seating = new QWidget();
        Seating->setObjectName(QStringLiteral("Seating"));
        Backup = new QPushButton(Seating);
        Backup->setObjectName(QStringLiteral("Backup"));
        Backup->setGeometry(QRect(590, 90, 89, 25));
        Backup->setIconSize(QSize(100, 100));
        BackDown = new QPushButton(Seating);
        BackDown->setObjectName(QStringLiteral("BackDown"));
        BackDown->setGeometry(QRect(600, 280, 89, 25));
        BackDown->setIconSize(QSize(100, 100));
        BackLeft = new QPushButton(Seating);
        BackLeft->setObjectName(QStringLiteral("BackLeft"));
        BackLeft->setGeometry(QRect(430, 170, 89, 25));
        BackLeft->setIconSize(QSize(80, 80));
        BackRight = new QPushButton(Seating);
        BackRight->setObjectName(QStringLiteral("BackRight"));
        BackRight->setGeometry(QRect(780, 170, 89, 25));
        BackRight->setIconSize(QSize(80, 80));
        DownUP = new QPushButton(Seating);
        DownUP->setObjectName(QStringLiteral("DownUP"));
        DownUP->setGeometry(QRect(1270, 80, 89, 25));
        DownUP->setIconSize(QSize(100, 100));
        Down = new QPushButton(Seating);
        Down->setObjectName(QStringLiteral("Down"));
        Down->setGeometry(QRect(1270, 280, 89, 25));
        Down->setIconSize(QSize(100, 100));
        SeatUP = new QPushButton(Seating);
        SeatUP->setObjectName(QStringLiteral("SeatUP"));
        SeatUP->setGeometry(QRect(80, 90, 89, 25));
        SeatUP->setIconSize(QSize(100, 100));
        SeatDown = new QPushButton(Seating);
        SeatDown->setObjectName(QStringLiteral("SeatDown"));
        SeatDown->setGeometry(QRect(80, 280, 89, 25));
        SeatDown->setIconSize(QSize(100, 100));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/CarNew.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainTab->addTab(Seating, icon12, QString());
        MainWindow->setCentralWidget(Background);

        retranslateUi(MainWindow);

        MainTab->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        channel1->setText(QApplication::translate("MainWindow", "channel1", Q_NULLPTR));
        channel2->setText(QApplication::translate("MainWindow", "channel2", Q_NULLPTR));
        channel3->setText(QApplication::translate("MainWindow", "channel3", Q_NULLPTR));
        channel4->setText(QApplication::translate("MainWindow", "channel4", Q_NULLPTR));
        channel5->setText(QApplication::translate("MainWindow", "channel5", Q_NULLPTR));
        channel6->setText(QApplication::translate("MainWindow", "channel6", Q_NULLPTR));
        scan->setText(QApplication::translate("MainWindow", "SCAN", Q_NULLPTR));
        SEEK->setText(QApplication::translate("MainWindow", "SEEK", Q_NULLPTR));
        Left->setText(QString());
        Right->setText(QString());
        Minus->setText(QString());
        Plus->setText(QString());
        MainTab->setTabText(MainTab->indexOf(widget), QString());
        FrontDefroster->setText(QString());
        label->setText(QApplication::translate("MainWindow", "         AUTO", Q_NULLPTR));
        SideDfroster->setText(QString());
        MirrorDefroster->setText(QString());
        SNOW->setText(QString());
        SpeedUP->setText(QString());
        VolumeUpAC->setText(QString());
        SpeedDown->setText(QString());
        VolumeDownAC->setText(QString());
        MainTab->setTabText(MainTab->indexOf(Temperature), QString());
        MainTab->setTabText(MainTab->indexOf(Beam), QString());
        MainTab->setTabText(MainTab->indexOf(Wiper), QString());
        Backup->setText(QString());
        BackDown->setText(QString());
        BackLeft->setText(QString());
        BackRight->setText(QString());
        DownUP->setText(QString());
        Down->setText(QString());
        SeatUP->setText(QString());
        SeatDown->setText(QString());
        MainTab->setTabText(MainTab->indexOf(Seating), QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
