#include "mainwindow.h"
#include "ui_mainwindow.h"


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

    // connect the buttons to their functions
    connect(option1, SIGNAL (released()), this, SLOT(on_pushButton_clicked()));
     connect(option2, SIGNAL (released()), this, SLOT(on_pushButton_2_clicked()));
      connect(option3, SIGNAL (released()), this, SLOT(on_pushButton_3_clicked()));
       connect(option4, SIGNAL (released()), this, SLOT(on_pushButton_4_clicked()));

    this->showNormal();

    randomize();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addEZ(){
    /*srand(time(NULL));
    addA= 1+(rand()%9);
    addB= 1+(rand()&9);
    answer  = addA + addB;
    answerPointer= &answer;*/
}

void MainWindow::randomize(){
    listAnsw[0]= -1;
    listAnsw[1]= -1;
    listAnsw[2]= -1;
    listAnsw[3]= -1;

    qrand() % 10;
    unsigned int x = (qrand()%4);
    listAnsw[x]=*answerPointer;
    for (int i=0; i< 4;i++){
        if (i!=x){
            int y = qrand()% 10;
            listAnsw[i]= y;
        }
    }
    arrayPointer=listAnsw;
}

void MainWindow::on_pushButton_clicked()
{
    // this shows the value of the random answer or real answer
    opt_1 = listAnsw[0];
    std::string s = std::to_string(opt_1);
    QString ss(s.c_str());

    option1->setText(ss);

    /*if(answer == listAnsw[0]){
        qDebug() << "Yay!";
    }*/
}

void MainWindow::on_pushButton_2_clicked()
{
    opt_2 = listAnsw[1];
    std::string s = std::to_string(opt_2);
    QString ss(s.c_str());

    option2->setText(ss);

    /*if(answer == listAnsw[1]){
        qDebug() << "Yay!";
    }*/
}

void MainWindow::on_pushButton_3_clicked()
{
    opt_3 = listAnsw[2];
    std::string s = std::to_string(opt_3);
    QString ss(s.c_str());

    option3->setText(ss);

   /* if(answer == listAnsw[2]){
        qDebug() << "Yay!";
    }*/
}

void MainWindow::on_pushButton_4_clicked()
{
    opt_4 = listAnsw[3];
    std::string s = std::to_string(opt_4);
    QString ss(s.c_str());

    option4->setText(ss);

   // if(answer == listAnsw[3]){
   //     qDebug() << "Yay!";
   // }
}
