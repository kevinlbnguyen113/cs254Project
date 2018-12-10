#ifndef DIVISION_H
#define DIVISION_H

#include <QDialog>

namespace Ui {
class Division;
}

class Division : public QDialog
{
    Q_OBJECT

public:
    explicit Division(QWidget *parent = nullptr);
    ~Division();

private:
    Ui::Division *ui;
};

#endif // DIVISION_H
