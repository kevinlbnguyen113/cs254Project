#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QRandomGenerator64>
#include <QDebug>
#include <QtCore>
#include <QtGui>
#include <QFrame>
#include <QFontDatabase>
#include <QCoreApplication>
#include <QString>
#include <string>
#include <QTime>
#include <QtGlobal>
#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // set the backgorund
    QPixmap bkgnd("/home/parallels/MathTutor/duckhunt.jpg");
    bkgnd = bkgnd.scaled(720, 600, Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    // create the buttons, button position, and button size
    option1 = new QPushButton("Option 1", this);
    option1->setGeometry(QRect(QPoint(100,100), QSize(100,100)));
    option2 = new QPushButton("Option 2", this);
    option2->setGeometry(QRect(QPoint(273,100), QSize(100,100)));
    option3 = new QPushButton("Option 3", this);
    option3->setGeometry(QRect(QPoint(447,100), QSize(100,100)));
    option4 = new QPushButton("Option 4", this);
    option4->setGeometry(QRect(QPoint(620,100), QSize(100,100)));

    numberA = new QLCDNumber(this);
    numberA->setGeometry(180,442,100,100);
    numberA->setSegmentStyle(QLCDNumber::Flat);
    numberA->setFrameStyle(0);

    numberB = new QLCDNumber(this);
    numberB->setGeometry(485,442,100,100);
    numberB->setSegmentStyle(QLCDNumber::Flat);
    numberB->setFrameStyle(0);

    // connect the buttons to their functions
    connect(option1, SIGNAL (released()), this, SLOT(on_pushButton_clicked()));
     connect(option2, SIGNAL (released()), this, SLOT(on_pushButton_2_clicked()));
      connect(option3, SIGNAL (released()), this, SLOT(on_pushButton_3_clicked()));
       connect(option4, SIGNAL (released()), this, SLOT(on_pushButton_4_clicked()));


    this->showNormal();

    correctCount = 0;

    randomize();

    addEZ();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addEZ(){
    std::uniform_int_distribution<int> distribution(1,50);
    int value1 = distribution(*QRandomGenerator::global());
    int value2 = distribution(*QRandomGenerator::global());

    addA = value1;
    addB = value2;

    on_lcdNumber_overflow();
    on_lcdNumber_2_overflow();


    answer = value1 + value2;

    std::string v1 = std::to_string(value1);
    std::string v2 = std::to_string(value2);

    QString vv1(v1.c_str());
    QString vv2(v2.c_str());
    QString answerCat;

    answerCat = vv1 + " + " + vv2 + " = ";

    for (int i=0; i< 4;i++){
        if (listAnsw[i] == -1){
            listAnsw[i]= answer;

            qDebug() << answer;

            std::string s = std::to_string(listAnsw[i]);
            QString ss(s.c_str());

            if(i == 0){
                std::string s = std::to_string(listAnsw[0]);
                QString ss(s.c_str());

                option1->setText(ss);
            }else if(i == 1){
                std::string s = std::to_string(listAnsw[1]);
                QString ss(s.c_str());

                option2->setText(ss);
            }else if(i == 2){
                std::string s = std::to_string(listAnsw[2]);
                QString ss(s.c_str());

                option3->setText(ss);
            }else{
                std::string s = std::to_string(listAnsw[3]);
                QString ss(s.c_str());

                option4->setText(ss);
            }
        }
    }
}

void MainWindow::randomize(){
    listAnsw[0]= -1;
    listAnsw[1]= -1;
    listAnsw[2]= -1;
    listAnsw[3]= -1;


    std::uniform_int_distribution<int> distribution(1,50);
    std::uniform_int_distribution<int> posDist(0,3);

    int value = distribution(*QRandomGenerator::global());
    int aPos = posDist(*QRandomGenerator::global());

    for (int i=0; i< 4;i++){
        if (i != aPos && i != -1){
            int wPos = distribution(*QRandomGenerator::global());
            listAnsw[i]= wPos;

            if(i == 0){
                std::string s = std::to_string(listAnsw[0]);
                QString ss(s.c_str());

                option1->setText(ss);
            }else if(i == 1){
                std::string s = std::to_string(listAnsw[1]);
                QString ss(s.c_str());

                option2->setText(ss);
            }else if(i == 2){
                std::string s = std::to_string(listAnsw[2]);
                QString ss(s.c_str());

                option3->setText(ss);
            }else{
                std::string s = std::to_string(listAnsw[3]);
                QString ss(s.c_str());

                option4->setText(ss);
            }
        }
    }
    arrayPointer = listAnsw;
}

void MainWindow::on_pushButton_clicked()
{
    // this shows the value of the random answer or real answer

    if(answer == listAnsw[0]){
        qDebug() << "Yay!";
        correctCount++;
    }else{
        qDebug() << "Incorrect!";
        correctCount = -1;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(answer == listAnsw[1]){
        qDebug() << "Yay!";
        correctCount++;
    }else{
        qDebug() << "Incorrect!";
        correctCount = -1;
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(answer == listAnsw[2]){
        qDebug() << "Yay!";
        correctCount++;
    }else{
        qDebug() << "Incorrect!";
        correctCount = -1;
    }
}

void MainWindow::on_pushButton_4_clicked()
{
   if(answer == listAnsw[3]){
        qDebug() << "Yay!";
        correctCount++;
   }else{
       qDebug() << "Incorrect!";
       correctCount = -1;
   }
}

void MainWindow::on_lcdNumber_overflow()
{
    std::string fVar = std::to_string(addA);
    QString fVar1(fVar.c_str());

    numberA->display(fVar1);
}

void MainWindow::on_lcdNumber_2_overflow()
{
    std::string sVar = std::to_string(addB);
    QString sVar1(sVar.c_str());

    numberB->display(sVar1);
}
