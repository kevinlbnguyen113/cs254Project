#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include <QDialog>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLCDNumber>
#include <QFrame>
namespace Ui {
class Multiplication;
}

class Multiplication : public QDialog
{
    Q_OBJECT

public:
    explicit Multiplication(QWidget *parent = nullptr);
    ~Multiplication();
    void randomize();
    void multiEZ();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_lcdNumber_overflow();

    void on_lcdNumber_2_overflow();

    void on_lcdNumber_3_overflow();
private:
        Ui::Multiplication *ui;
        QPushButton *option1;
        QPushButton *option2;
        QPushButton *option3;
        QPushButton *option4;

        QLCDNumber *numberA;
        QLCDNumber *numberB;
        QLCDNumber *corCounter;
        QLabel *answerLabel;

        int opt_1;
        int opt_2;
        int opt_3;
        int opt_4;
        int addA, addB;
        int answer;
        int correctCount;
        int listAnsw[4];
        int *answerPointer;
        int *arrayPointer;

};

#endif // MULTIPLICATION_H
