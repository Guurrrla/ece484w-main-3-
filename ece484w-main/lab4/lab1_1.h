#ifndef LAB1_1_H
#define LAB1_1_H

#include <QMainWindow>
#include <QPixmap>
#include <QFileDialog>
#include <QPainter>
#include <QUdpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Lab1_1; }
QT_END_NAMESPACE

class Lab1_1 : public QMainWindow
{
    Q_OBJECT

public:
    Lab1_1(QWidget *parent = nullptr);
    ~Lab1_1();

private slots:
    //see if button is clicked for images that are to be manipulated
    void on_Base_Button_clicked();

    void on_Overlay_Button_clicked();

    void on_Text_Button_clicked();
    
    //save chnaged image as new file
    void on_Save_Button_clicked();

    void updateBrightnessContrast();

    void on_brightness_sliderReleased();

    void on_contrast_sliderReleased();

    void on_sendbase_clicked();

    void on_sendoverlay_clicked();

    void on_sendbrightness_clicked();

    void on_sendcontrast_clicked();

    void on_display_clicked();

    void on_exit_clicked();

private:
    QPixmap Base;
    QPixmap Overlay;
    QPixmap Combination;

    QUdpSocket socket;

    Ui::Lab1_1 *ui;
};
#endif // LAB1_1_H
