/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *dummy;
    QGroupBox *groupBox_2;
    QPushButton *Division_2;
    QPushButton *Plus_2;
    QPushButton *Minus_2;
    QPushButton *Multiplication_2;
    QPushButton *Subtraction_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1380, 891);
        dummy = new QPushButton(Widget);
        dummy->setObjectName(QStringLiteral("dummy"));
        dummy->setGeometry(QRect(890, 410, 121, 31));
        dummy->setIconSize(QSize(50, 50));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(220, 90, 501, 411));
        Division_2 = new QPushButton(groupBox_2);
        Division_2->setObjectName(QStringLiteral("Division_2"));
        Division_2->setGeometry(QRect(200, 200, 80, 25));
        Plus_2 = new QPushButton(groupBox_2);
        Plus_2->setObjectName(QStringLiteral("Plus_2"));
        Plus_2->setGeometry(QRect(180, 150, 123, 25));
        Minus_2 = new QPushButton(groupBox_2);
        Minus_2->setObjectName(QStringLiteral("Minus_2"));
        Minus_2->setGeometry(QRect(120, 100, 252, 25));
        Minus_2->setStyleSheet(QStringLiteral("background-image: url(:/images.png);"));
        Minus_2->setIconSize(QSize(70, 70));
        Multiplication_2 = new QPushButton(groupBox_2);
        Multiplication_2->setObjectName(QStringLiteral("Multiplication_2"));
        Multiplication_2->setGeometry(QRect(180, 250, 123, 25));
        Subtraction_2 = new QPushButton(groupBox_2);
        Subtraction_2->setObjectName(QStringLiteral("Subtraction_2"));
        Subtraction_2->setGeometry(QRect(110, 310, 252, 25));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(780, 110, 256, 62));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        dummy->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Widget", "GroupBox", Q_NULLPTR));
        Division_2->setText(QApplication::translate("Widget", "Division", Q_NULLPTR));
        Plus_2->setText(QApplication::translate("Widget", "Plus", Q_NULLPTR));
        Minus_2->setText(QString());
        Multiplication_2->setText(QApplication::translate("Widget", "Mul", Q_NULLPTR));
        Subtraction_2->setText(QApplication::translate("Widget", "Sub", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
