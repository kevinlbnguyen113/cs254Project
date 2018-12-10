#include "multiplication.h"
#include "ui_multiplication.h"

Multiplication::Multiplication(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Multiplication)
{
    ui->setupUi(this);
}

Multiplication::~Multiplication()
{
    delete ui;
}
