/********************************************************************************
** Form generated from reading UI file 'lab1_2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB1_2_H
#define UI_LAB1_2_H

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

class Ui_lab1_2
{
public:
    QWidget *centralwidget;
    QSlider *contrast;
    QSlider *brightness;
    QLabel *Base;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *loadButton;
    QPushButton *saveButton;
    QLabel *Output;
    QLabel *label;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *lab1_2)
    {
        if (lab1_2->objectName().isEmpty())
            lab1_2->setObjectName(QString::fromUtf8("lab1_2"));
        lab1_2->resize(1071, 840);
        centralwidget = new QWidget(lab1_2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        contrast = new QSlider(centralwidget);
        contrast->setObjectName(QString::fromUtf8("contrast"));
        contrast->setGeometry(QRect(700, 60, 160, 16));
        contrast->setOrientation(Qt::Horizontal);
        brightness = new QSlider(centralwidget);
        brightness->setObjectName(QString::fromUtf8("brightness"));
        brightness->setGeometry(QRect(120, 60, 160, 16));
        brightness->setOrientation(Qt::Horizontal);
        Base = new QLabel(centralwidget);
        Base->setObjectName(QString::fromUtf8("Base"));
        Base->setGeometry(QRect(0, 180, 512, 512));
        Base->setMaximumSize(QSize(10000000, 10000000));
        Base->setBaseSize(QSize(0, 0));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 30, 47, 13));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(750, 30, 47, 13));
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(440, 10, 80, 21));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(440, 50, 80, 21));
        Output = new QLabel(centralwidget);
        Output->setObjectName(QString::fromUtf8("Output"));
        Output->setGeometry(QRect(540, 170, 512, 512));
        Output->setMaximumSize(QSize(10000000, 10000000));
        Output->setBaseSize(QSize(0, 0));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 140, 47, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(830, 130, 47, 13));
        lab1_2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lab1_2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1071, 20));
        lab1_2->setMenuBar(menubar);
        statusbar = new QStatusBar(lab1_2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        lab1_2->setStatusBar(statusbar);

        retranslateUi(lab1_2);

        QMetaObject::connectSlotsByName(lab1_2);
    } // setupUi

    void retranslateUi(QMainWindow *lab1_2)
    {
        lab1_2->setWindowTitle(QCoreApplication::translate("lab1_2", "lab1_2", nullptr));
        Base->setText(QString());
        label_2->setText(QCoreApplication::translate("lab1_2", "Brightness", nullptr));
        label_3->setText(QCoreApplication::translate("lab1_2", "Contrast", nullptr));
        loadButton->setText(QCoreApplication::translate("lab1_2", "Load Image", nullptr));
        saveButton->setText(QCoreApplication::translate("lab1_2", "Save Image", nullptr));
        Output->setText(QString());
        label->setText(QCoreApplication::translate("lab1_2", "Base", nullptr));
        label_4->setText(QCoreApplication::translate("lab1_2", "Output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab1_2: public Ui_lab1_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB1_2_H
