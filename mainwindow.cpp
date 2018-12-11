#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addition.h"
#include"division.h"
#include "subtraction.h"
#include "multiplication.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("/Users/Tram-AnhTran/project2/Math-is-Fun.jpg");
    bkgnd = bkgnd.scaled(640, 480, Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Addition a;
    a.showNormal();
    a.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    Division d;
    d.showNormal();
    d.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    Subtraction s;
    s.showNormal();
    s.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    Multiplication m;
    m.showNormal();
    m.exec();
}
