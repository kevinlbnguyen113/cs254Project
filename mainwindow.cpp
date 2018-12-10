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
