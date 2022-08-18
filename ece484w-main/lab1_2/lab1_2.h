#ifndef LAB1_2_H
#define LAB1_2_H

#include <QMainWindow>
#include <QPixmap>
#include <QUdpSocket>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class lab1_2; }
QT_END_NAMESPACE

class lab1_2 : public QMainWindow
{
    Q_OBJECT

public:
    lab1_2(QWidget *parent = nullptr);
    ~lab1_2();

private slots:

    //make changes based of user's parameters
    void updateBrightnessContrast();
    
    void sendBrightnessContrast();


    //see if user has clicked button to load or save
    void on_loadButton_clicked();

    void on_saveButton_clicked();


    //see the amount of change user wants to add to the image
    void on_brightness_sliderMoved(int position); //brightness

    void on_contrast_sliderMoved(int position); //contrast



private:
    QPixmap Base;
    QPixmap Output;
    Ui::lab1_2 *ui;
    QUdpSocket *socket;

};
#endif // LAB1_2_H
