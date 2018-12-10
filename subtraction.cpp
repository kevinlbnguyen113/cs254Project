#include "subtraction.h"
#include "ui_subtraction.h"

Subtraction::Subtraction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Subtraction)
{
    ui->setupUi(this);
}

Subtraction::~Subtraction()
{
    delete ui;
}
