#include "lab1_1.h"
#include "ui_lab1_1.h"
#include <QPixmap>
#include <QFileDialog>
#include <QPainter>
#include <QInputDialog>
#include <QBuffer>
#include <iostream>
#include <QImage>
#include <QImageWriter>
#include <QThread>

//Construcor
Lab1_1::Lab1_1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab1_1)
{
    ui->setupUi(this);


    socket = new QUdpSocket();

    std::cout<<"here"<<std::endl;

    ui->setupUi(this);


}

//Deconstructor
Lab1_1::~Lab1_1()
{
    delete ui;
}

//Button that allows user to add a base image to UI
void Lab1_1::on_Base_Button_clicked()
{

    //read the base image
    QString filename = QFileDialog::getOpenFileName(this,tr("Open Image"),"C://",tr("Image Files (*.bmp)")); //read the path of base image from path and store as filename 
    QPixmap temp(filename); //make a copy of said image into a temp object

    Base = temp; //set the temp object as the Base


    //set the image as a 512x512 image
    ui->Base->setPixmap(Base.scaled(512,512, Qt::KeepAspectRatio));

    //combine both images
    Combination = Base; //set base image as a combination image as the combination image is part of the merged image
    QPainter paint(&Combination); //allow the combination image to be altered

    paint.drawPixmap(0,0,100,100, Overlay); // add the overlay image to the corner of the base image

    ui->Combination->setPixmap(Combination.scaled(512,512, Qt::KeepAspectRatio)); //show the combined images to the user

}

//Button that allows user to add an overlay image to UI
void Lab1_1::on_Overlay_Button_clicked()
{
    //read the overlay image
    QString overlay = QFileDialog::getOpenFileName(this,tr("Open Image"),"C://",tr("Image Files (*.bmp)"));//read the path of overlay image from path and store as overlay 
    QPixmap temp(overlay); //make a copy of said image from th ovlay path into a temp object

    Overlay = temp;//set the temp object as the Overlay
    
    //set the image as a 512x512 image
    ui->Overlay->setPixmap(Overlay.scaled(512,512, Qt::KeepAspectRatio));

    //combine both images
    Combination = Base;//set overlay image as a combination image as the combination image is part of the merged image
    QPainter paint(&Combination); //allow the combination image to be altered

    paint.drawPixmap(0,0,100,100, Overlay); // add the overlay image to the corner of the base image

    ui->Combination->setPixmap(Combination.scaled(512,512, Qt::KeepAspectRatio));//show the combined images to the user
}




//Button to add text to image
void Lab1_1::on_Text_Button_clicked()
{
    bool ok; // if clicked
    //read text user wants to add
    QString text = QInputDialog::getText(this, "Insert Text",
                                         tr("Text:"), QLineEdit::Normal,
                                         QDir::home().dirName(), &ok); 
    QPainter paint(&Combination); //allow the combination image to be altered

    paint.setPen(Qt::black); //set text to black coloered font
    paint.setFont(QFont("Helvetica", 15)); //set text to helvetica fount 15 size
    paint.drawText(Combination.rect(), Qt::AlignCenter, text); //add to front of image

    ui->Combination->setPixmap(Combination); //show user result
}

//save image to user's pc
void Lab1_1::on_Save_Button_clicked()
{


    QString text = QFileDialog::getSaveFileName(this, "Insert File Path"); // find path user wants to save file
    Combination.save(text, "BMP");// add file as a .bmp
}








//send base
void Lab1_1::on_pushButton_clicked()
{
    QImage img = Base.toImage();
    img = img.scaled(512, 512);
    QColor p;


    //edit teh hex bit of the colors of the based on the chosen sliders
        for(int i = 0; i<img.height(); i++) //change height pixel
        {
            for(int j = 0; j<img.width(); j++) //change weight pixel
            {
                QByteArray data;

                p = img.pixel(j, i); //add both pixels to one objects

                data.append("BASE");
                data.append(QStringLiteral("%1").arg((int)i, 3, 10, QLatin1Char('0')));
                data.append(QStringLiteral("%1").arg((int)j, 3, 10, QLatin1Char('0')));
                data.append(QStringLiteral("%1").arg((int)p.red(), 3, 10, QLatin1Char('0')));
                data.append(QStringLiteral("%1").arg((int)p.green(), 3, 10, QLatin1Char('0')));;
                data.append(QStringLiteral("%1").arg((int)p.blue(), 3, 10, QLatin1Char('0')));
                //std::cout<<qPrintable(data)<<std::endl;
                socket->writeDatagram(data, QHostAddress("192.168.1.220"), 80);
                QThread::usleep(1);


            }
        }
}

//send overlay
void Lab1_1::on_pushButton_2_clicked()
{
    QImage img = Overlay.toImage();
    img = img.scaled(128, 128);
    QColor p;


    //edit teh hex bit of the colors of the based on the chosen sliders
        for(int i = 0; i<img.height(); i++) //change height pixel
        {
            for(int j = 0; j<img.width(); j++) //change weight pixel
            {
                QByteArray data;

                p = img.pixel(j, i); //add both pixels to one objects

                data.append("OVER");
                data.append(QStringLiteral("%1").arg((int)i, 3, 10, QLatin1Char('0')));
                data.append(QStringLiteral("%1").arg((int)j, 3, 10, QLatin1Char('0')));
                data.append(QStringLiteral("%1").arg((int)p.red(), 3, 10, QLatin1Char('0')));
                data.append(QStringLiteral("%1").arg((int)p.green(), 3, 10, QLatin1Char('0')));;
                data.append(QStringLiteral("%1").arg((int)p.blue(), 3, 10, QLatin1Char('0')));
                //std::cout<<qPrintable(data)<<std::endl;
                socket->writeDatagram(data, QHostAddress("192.168.1.220"), 80);
                QThread::usleep(1);


            }
        }

}


void Lab1_1::on_pushButton_3_clicked()
{
    QByteArray data;
    data.append("DISP");
    socket->writeDatagram(data, QHostAddress("192.168.1.220"), 80);
}


void Lab1_1::on_pushButton_4_clicked()
{
    QByteArray data;
    data.append("QUIT");
    socket->writeDatagram(data, QHostAddress("192.168.1.220"), 80);

}




