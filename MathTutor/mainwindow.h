#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void randomize();
    void addEZ();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QPushButton *option1;
     QPushButton *option2;
      QPushButton *option3;
       QPushButton *option4;

    int opt_1;
    int opt_2;
    int opt_3;
    int opt_4;
    int addA, addB;
    int answer;
    int listAnsw[4];
    int *answerPointer;
    int *arrayPointer;
};

#endif // MAINWINDOW_H