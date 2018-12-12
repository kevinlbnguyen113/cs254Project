#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <qapplication.h>
#include <qpushbutton.h>
#include <QtGui>
#include"menuwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MenuWindow menuWindow;
    MainWindow addition;
    menuWindow.showNormal();

    return a.exec();
}
