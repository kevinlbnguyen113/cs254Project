#ifndef ADDITION_H
#define ADDITION_H

#include <QDialog>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLCDNumber>
#include <QFrame>

namespace Ui {
class Addition;
}

class Addition : public QDialog
{
    Q_OBJECT

public:
    explicit Addition(QWidget *parent = nullptr);
    ~Addition();
    void randomize(); // function to randomize the choice tiles
    void addEZ(); // function to calculate the correct answer and assign to a tile
                  // in addition to displaying the answers
private slots:
    void on_pushButton_clicked(); // first tile button to choose from

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked(); // last tile button to choose from 

    void on_lcdNumber_overflow(); // LCD display number as variable to the problem

    void on_lcdNumber_2_overflow();

    void on_lcdNumber_3_overflow(); // LCD number that displays the counter for correct answers
private:
        Ui::Addition *ui;
        QPushButton *option1; // button 
        QPushButton *option2;
        QPushButton *option3;
        QPushButton *option4;

        QLCDNumber *numberA;// LCD display number
        QLCDNumber *numberB;
        QLCDNumber *corCounter; // 
        QLabel *answerLabel;

        int opt_1; // first integer value for tile 1
        int opt_2;
        int opt_3;
        int opt_4;
        int addA, addB; // variable values for the problem
        int answer; // answer value for the problem
        int correctCount; // integer counter
        int listAnsw[4]; // array that holds the wrong and correct answers
        int *answerPointer; // pointer to the answer in the array
        int *arrayPointer; // pointer to the array
};

#endif // ADDITION_H
