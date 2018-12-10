#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include <QDialog>

namespace Ui {
class Multiplication;
}

class Multiplication : public QDialog
{
    Q_OBJECT

public:
    explicit Multiplication(QWidget *parent = nullptr);
    ~Multiplication();

private:
    Ui::Multiplication *ui;
};

#endif // MULTIPLICATION_H
