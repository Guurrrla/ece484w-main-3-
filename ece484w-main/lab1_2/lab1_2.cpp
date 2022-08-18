#include "lab1_2.h"
#include "ui_lab1_2.h"
#include <QFileDialog>
#include <QPainter>
#include <iostream>
#include <iostream>

//Constuctor
lab1_2::lab1_2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lab1_2)
{
    ui->setupUi(this);
    //initalize the brightness
    ui->brightness->setRange(-256, 256);
    ui->brightness->setSingleStep(1);
    
    //initalize the contrast
    ui->contrast->setRange(-256, 256);
    ui->contrast->setSingleStep(1);


    socket = new QUdpSocket();

    sendBrightnessContrast();
}

//Deconstructor
lab1_2::~lab1_2()
{
    delete ui;
}

//update the filter of the photo
void lab1_2::updateBrightnessContrast()
{
    //Source Code: https://www.dfstudios.co.uk/articles/programming/image-programming-algorithms/image-processing-algorithms-part-5-contrast-adjustment/
    Output = Base; //equate the base image to the output image

    double brightness = ui->brightness->value(); //make the brightness value equal the ui brightness
    double contrast = ui->contrast->value(); //make the contrast value equal the ui contrast

    double F = (259.0*(contrast+255.0))/(255.0*(259.0-contrast)); //make f histgram equation 

    QImage outputImage = Output.toImage();//allow image the ablity to be altered

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
    Output = QPixmap::fromImage(outputImage);
    
    //show user out put image
    ui->Output->setPixmap(Output.scaled(512,512, Qt::KeepAspectRatio));
}



//button to load image
void lab1_2::on_loadButton_clicked()
{
    //add file path to know which image to chnage
    QString filename = QFileDialog::getOpenFileName(this,tr("Open Image"),"C://",tr("Image Files (*.bmp)")); 
    QPixmap temp(filename);// make tempary copy of image

    Base = temp; //make temp the Base
    Output = Base; //make Base the output image


    ui->Base->setPixmap(Base.scaled(512,512, Qt::KeepAspectRatio)); //show image to user

    updateBrightnessContrast(); // call upadate function

}

//save image to user's PC
void lab1_2::on_saveButton_clicked()
{
    QString text = QFileDialog::getSaveFileName(this, "Insert File Path"); //find the path user want to save image to
    Output.save(text, "BMP"); // add file as an .bmp
}



//Call update function with user parameters for brightness
void lab1_2::on_brightness_sliderMoved(int position)
{
     updateBrightnessContrast();
     sendBrightnessContrast();
}

//Call update functio with user parameters for contrast
void lab1_2::on_contrast_sliderMoved(int position)
{
     updateBrightnessContrast();
     sendBrightnessContrast();
}

void lab1_2::sendBrightnessContrast()
{
    double brightness = ui->brightness->value(); //make the brightness value equal the ui brightness
    double contrast = ui->contrast->value(); //make the contrast value equal the ui contrast
    brightness = brightness + 256.0;
    contrast = contrast + 256.0;

    brightness = brightness / 512.0 * 99.0;
    contrast = contrast / 512.0 * 99.0;



    QString b = QStringLiteral("%1").arg((int)brightness, 2, 10, QLatin1Char('0'));
    QString c = QStringLiteral("%1").arg((int)contrast, 2, 10, QLatin1Char('0'));

    QByteArray data;

    data.append(b);
    data.append(c);

    //std::cout<<b.toStdString()<<std::endl;
    //std::cout<<c.toStdString()<<std::endl;
    socket->writeDatagram(data, QHostAddress("192.168.1.226"), 80);

}




