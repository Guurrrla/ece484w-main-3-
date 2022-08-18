#include "lab1_1.h"
#include "ui_lab1_1.h"
#include <QPixmap>
#include <QFileDialog>
#include <QPainter>
#include <QInputDialog>
#include <QThread>

//Construcor
Lab1_1::Lab1_1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab1_1)
{
    ui->setupUi(this);

    ui->brightness->setRange(-256, 256);
    ui->brightness->setSingleStep(1);

    //initalize the contrast
    ui->contrast->setRange(-256, 256);
    ui->contrast->setSingleStep(1);

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

    //updateBrightnessContrast();

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

    //updateBrightnessContrast();
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

    updateBrightnessContrast();
}

//save image to user's pc
void Lab1_1::on_Save_Button_clicked()
{


    QString text = QFileDialog::getSaveFileName(this, "Insert File Path"); // find path user wants to save file
    Combination.save(text, "BMP");// add file as a .bmp
}

void Lab1_1::updateBrightnessContrast()
{
    //Source Code: https://www.dfstudios.co.uk/articles/programming/image-programming-algorithms/image-processing-algorithms-part-5-contrast-adjustment/

    QPixmap temp = Combination;

    double brightness = ui->brightness->value(); //make the brightness value equal the ui brightness
    double contrast = ui->contrast->value(); //make the contrast value equal the ui contrast

    double F = (259.0*(contrast+255.0))/(255.0*(259.0-contrast)); //make f histgram equation

    QImage outputImage = temp.toImage();//allow image the ablity to be altered

    QColor p;

    int red;
    int green;
    int blue;


    //std::cout<<F<<std::endl;
    //edit teh hex bit of the colors of the based on the chosen sliders
    for(int i = 0; i<outputImage.height(); i++) //change height pixel
    {
        for(int j = 0; j<outputImage.width(); j++) //change weight pixel
        {
            p = outputImage.pixel(j, i); //add both pixels to one objects

            //make rgb connected to the fuction that controls
            red = p.red();
            green = p.green();
            blue = p.blue();

            //change rgb based of chosen brightness settings
            red = F * (red - 128.0) + 128.0 + brightness;
            green = F * (green - 128.0) + 128.0 + brightness;
            blue = F * (blue - 128.0) + 128.0 + brightness;

            if(red>255)
            {
                red = 255;
            }
            else if (red<0)
            {
                red = 0;
            }

            if(green>255)
            {
                green = 255;
            }
            else if (green<0)
            {
                green = 0;
            }

            if(blue>255)
            {
                blue = 255;
            }
            else if(blue<0)
            {
                blue=0;
            }


            //Set RGB from change
            p.setRed(red);
            p.setGreen(green);
            p.setBlue(blue);

            outputImage.setPixelColor(j,i,p);
        }
    }

    //add change to current output image
    temp = QPixmap::fromImage(outputImage);

    //show user out put image
    ui->Combination->setPixmap(temp.scaled(512,512, Qt::KeepAspectRatio));
}



void Lab1_1::on_brightness_sliderReleased()
{
    updateBrightnessContrast();
}


void Lab1_1::on_contrast_sliderReleased()
{
    updateBrightnessContrast();
}


void Lab1_1::on_sendbase_clicked()
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
                    socket.writeDatagram(data, QHostAddress("192.168.1.9"), 80);
                    QThread::usleep(1);


                }
            }
}


void Lab1_1::on_sendoverlay_clicked()
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
                socket.writeDatagram(data, QHostAddress("192.168.1.9"), 80);
                QThread::usleep(1);


            }
        }
}


void Lab1_1::on_sendbrightness_clicked()
{
    int brightness = ui->brightness->value() + 256;
    QByteArray data;
    data.append("BRIG");
    data.append(QStringLiteral("%1").arg((int)brightness, 3, 10, QLatin1Char('0')));
    socket.writeDatagram(data, QHostAddress("192.168.1.9"), 80);
}


void Lab1_1::on_sendcontrast_clicked()
{
    int contrast = ui->contrast->value() + 256;
    QByteArray data;
    data.append("CONT");
    data.append(QStringLiteral("%1").arg((int)contrast, 3, 10, QLatin1Char('0')));
    socket.writeDatagram(data, QHostAddress("192.168.1.9"), 80);
}


void Lab1_1::on_display_clicked()
{
    QByteArray data;
    data.append("DISP");
    socket.writeDatagram(data, QHostAddress("192.168.1.9"), 80);
}


void Lab1_1::on_exit_clicked()
{
    QByteArray data;
    data.append("QUIT");
    socket.writeDatagram(data, QHostAddress("192.168.1.9"), 80);
}

