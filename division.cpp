#include "division.h"
#include "ui_division.h"

Division::Division(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Division)
{
    ui->setupUi(this);
}

Division::~Division()
{
    delete ui;
}
