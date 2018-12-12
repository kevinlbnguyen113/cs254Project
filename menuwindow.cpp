#include "menuwindow.h"
#include "ui_menuwindow.h"
#include "mainwindow.h"
#include <QDialog>
#include "QDialog"

/*
    This is the menu window that will allow the different options to be selected for 
    the different math functions.
*/
MenuWindow::MenuWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_pushButton99_clicked()
{
    QApplication b();
    MainWindow c;
    c.showNormal();

}
