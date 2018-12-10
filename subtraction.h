#ifndef SUBTRACTION_H
#define SUBTRACTION_H

#include <QDialog>

namespace Ui {
class Subtraction;
}

class Subtraction : public QDialog
{
    Q_OBJECT

public:
    explicit Subtraction(QWidget *parent = nullptr);
    ~Subtraction();

private:
    Ui::Subtraction *ui;
};

#endif // SUBTRACTION_H
