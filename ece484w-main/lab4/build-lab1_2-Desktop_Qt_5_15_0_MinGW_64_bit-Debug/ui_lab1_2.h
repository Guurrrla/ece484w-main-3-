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
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *lab1_2)
    {
        if (lab1_2->objectName().isEmpty())
            lab1_2->setObjectName(QString::fromUtf8("lab1_2"));
        lab1_2->resize(800, 600);
        centralwidget = new QWidget(lab1_2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        contrast = new QSlider(centralwidget);
        contrast->setObjectName(QString::fromUtf8("contrast"));
        contrast->setGeometry(QRect(470, 20, 160, 16));
        contrast->setOrientation(Qt::Horizontal);
        brightness = new QSlider(centralwidget);
        brightness->setObjectName(QString::fromUtf8("brightness"));
        brightness->setGeometry(QRect(60, 20, 160, 16));
        brightness->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(66, 63, 512, 512));
        label->setMaximumSize(QSize(10000000, 10000000));
        label->setBaseSize(QSize(0, 0));
        lab1_2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lab1_2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class lab1_2: public Ui_lab1_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB1_2_H
