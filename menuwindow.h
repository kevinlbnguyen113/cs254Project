#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QDialog>
#include "mainwindow.h"
#include <QApplication>

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();

private slots:
    void on_pushButton99_clicked();

private:
    Ui::MenuWindow *ui;
};

#endif // MENUWINDOW_H
