/********************************************************************************
** Form generated from reading UI file 'lab1_1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB1_1_H
#define UI_LAB1_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab1_1
{
public:
    QWidget *centralwidget;
    QLabel *Combination;
    QPushButton *Base_Button;
    QPushButton *Overlay_Button;
    QPushButton *Text_Button;
    QPushButton *Save_Button;
    QLabel *Base;
    QLabel *Overlay;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *brightness;
    QSlider *contrast;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *sendbase;
    QPushButton *sendoverlay;
    QPushButton *sendbrightness;
    QPushButton *sendcontrast;
    QPushButton *display;
    QPushButton *exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Lab1_1)
    {
        if (Lab1_1->objectName().isEmpty())
            Lab1_1->setObjectName(QString::fromUtf8("Lab1_1"));
        Lab1_1->resize(1590, 1110);
        centralwidget = new QWidget(Lab1_1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Combination = new QLabel(centralwidget);
        Combination->setObjectName(QString::fromUtf8("Combination"));
        Combination->setGeometry(QRect(170, 560, 512, 512));
        Base_Button = new QPushButton(centralwidget);
        Base_Button->setObjectName(QString::fromUtf8("Base_Button"));
        Base_Button->setGeometry(QRect(20, 50, 111, 22));
        Overlay_Button = new QPushButton(centralwidget);
        Overlay_Button->setObjectName(QString::fromUtf8("Overlay_Button"));
        Overlay_Button->setGeometry(QRect(20, 110, 111, 22));
        Text_Button = new QPushButton(centralwidget);
        Text_Button->setObjectName(QString::fromUtf8("Text_Button"));
        Text_Button->setGeometry(QRect(20, 170, 111, 22));
        Save_Button = new QPushButton(centralwidget);
        Save_Button->setObjectName(QString::fromUtf8("Save_Button"));
        Save_Button->setGeometry(QRect(20, 230, 111, 22));
        Base = new QLabel(centralwidget);
        Base->setObjectName(QString::fromUtf8("Base"));
        Base->setGeometry(QRect(160, 20, 512, 512));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Base->sizePolicy().hasHeightForWidth());
        Base->setSizePolicy(sizePolicy);
        Overlay = new QLabel(centralwidget);
        Overlay->setObjectName(QString::fromUtf8("Overlay"));
        Overlay->setGeometry(QRect(700, 20, 512, 512));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, -10, 201, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(780, 0, 161, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 540, 141, 21));
        brightness = new QSlider(centralwidget);
        brightness->setObjectName(QString::fromUtf8("brightness"));
        brightness->setGeometry(QRect(930, 660, 160, 16));
        brightness->setOrientation(Qt::Horizontal);
        contrast = new QSlider(centralwidget);
        contrast->setObjectName(QString::fromUtf8("contrast"));
        contrast->setGeometry(QRect(1200, 660, 160, 16));
        contrast->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(970, 620, 81, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1250, 620, 47, 13));
        sendbase = new QPushButton(centralwidget);
        sendbase->setObjectName(QString::fromUtf8("sendbase"));
        sendbase->setGeometry(QRect(30, 280, 80, 21));
        sendoverlay = new QPushButton(centralwidget);
        sendoverlay->setObjectName(QString::fromUtf8("sendoverlay"));
        sendoverlay->setGeometry(QRect(30, 320, 80, 21));
        sendbrightness = new QPushButton(centralwidget);
        sendbrightness->setObjectName(QString::fromUtf8("sendbrightness"));
        sendbrightness->setGeometry(QRect(30, 370, 91, 21));
        sendcontrast = new QPushButton(centralwidget);
        sendcontrast->setObjectName(QString::fromUtf8("sendcontrast"));
        sendcontrast->setGeometry(QRect(30, 420, 80, 21));
        display = new QPushButton(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(30, 450, 80, 21));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(30, 500, 80, 21));
        Lab1_1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Lab1_1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1590, 20));
        Lab1_1->setMenuBar(menubar);
        statusbar = new QStatusBar(Lab1_1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Lab1_1->setStatusBar(statusbar);

        retranslateUi(Lab1_1);

        QMetaObject::connectSlotsByName(Lab1_1);
    } // setupUi

    void retranslateUi(QMainWindow *Lab1_1)
    {
        Lab1_1->setWindowTitle(QCoreApplication::translate("Lab1_1", "Lab1_1", nullptr));
        Combination->setText(QString());
        Base_Button->setText(QCoreApplication::translate("Lab1_1", "Load Base Image", nullptr));
        Overlay_Button->setText(QCoreApplication::translate("Lab1_1", "Load Overlay Image", nullptr));
        Text_Button->setText(QCoreApplication::translate("Lab1_1", "Insert Overlay Text", nullptr));
        Save_Button->setText(QCoreApplication::translate("Lab1_1", "Save Final Image", nullptr));
        Base->setText(QString());
        Overlay->setText(QString());
        label->setText(QCoreApplication::translate("Lab1_1", "Base", nullptr));
        label_2->setText(QCoreApplication::translate("Lab1_1", "Overlay", nullptr));
        label_3->setText(QCoreApplication::translate("Lab1_1", "Combination", nullptr));
        label_4->setText(QCoreApplication::translate("Lab1_1", "brightness", nullptr));
        label_5->setText(QCoreApplication::translate("Lab1_1", "contrast", nullptr));
        sendbase->setText(QCoreApplication::translate("Lab1_1", "Send Base", nullptr));
        sendoverlay->setText(QCoreApplication::translate("Lab1_1", "Send Overlay", nullptr));
        sendbrightness->setText(QCoreApplication::translate("Lab1_1", "Send Brightness", nullptr));
        sendcontrast->setText(QCoreApplication::translate("Lab1_1", "Send Contrast", nullptr));
        display->setText(QCoreApplication::translate("Lab1_1", "Display", nullptr));
        exit->setText(QCoreApplication::translate("Lab1_1", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab1_1: public Ui_Lab1_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB1_1_H
