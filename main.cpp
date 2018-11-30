#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <qapplication.h>
#include <qpushbutton.h>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.showNormal();

    return a.exec();
}
