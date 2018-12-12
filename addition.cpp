#include "addition.h"
#include "ui_addition.h"
#include <QRandomGenerator64>
#include <QDebug>
#include <QtCore>
#include <QtGui>
#include <QFrame>
#include <QFontDatabase>
#include <QCoreApplication>
#include <QString>
#include <string>
#include <QTime>
#include <QtGlobal>
#include <iostream>

/*
    Addition
        Widget class for the addition widget page
*/
Addition::Addition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Addition)
{
    ui->setupUi(this);
    // set the backgorund
    QPixmap bkgnd("/Users/Tram-AnhTran/Desktop/duckhunt.jpg");
    bkgnd = bkgnd.scaled(640, 480, Qt::IgnoreAspectRatio); // set the window size
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd); // paints the background as the set image
    this->setPalette(palette);
    
    // time seed for the RNG QRandomNumberGenerator
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
        
    // create the buttons, button position, and button size
        option1 = new QPushButton("Option 1", this); // initialize the button for tile selections
        option1->setGeometry(QRect(QPoint(50,100), QSize(100,100))); // sets the image size and the position
        option2 = new QPushButton("Option 2", this);
        option2->setGeometry(QRect(QPoint(173,100), QSize(100,100)));
        option3 = new QPushButton("Option 3", this);
        option3->setGeometry(QRect(QPoint(320,100), QSize(100,100)));
        option4 = new QPushButton("Option 4", this);
        option4->setGeometry(QRect(QPoint(470,100), QSize(100,100)));

        // LCD number that displays the first integer variable for the given function
        numberA = new QLCDNumber(this);
        numberA->setGeometry(80,300,100,100); // sets the size of the displayed LCD number and the position
        numberA->setSegmentStyle(QLCDNumber::Flat); // sets the style off the LCD number of how it is displayed
        numberA->setFrameStyle(0); // sets the frame style of the number, zero means there should be no frame
        
        numberB = new QLCDNumber(this);
        numberB->setGeometry(450,300,100,100);
        numberB->setSegmentStyle(QLCDNumber::Flat);
        numberB->setFrameStyle(0);

         // LCD number that displays the counting integer variable for the number of correct answers selected
        corCounter = new QLCDNumber(this);
        corCounter->setGeometry(475,8,100,100);
        corCounter->setSegmentStyle(QLCDNumber::Flat);
        corCounter->setFrameStyle(0);

        // connect the buttons to their functions
        connect(option1, SIGNAL (released()), this, SLOT(on_pushButton_clicked()));
         connect(option2, SIGNAL (released()), this, SLOT(on_pushButton_2_clicked()));
          connect(option3, SIGNAL (released()), this, SLOT(on_pushButton_3_clicked()));
           connect(option4, SIGNAL (released()), this, SLOT(on_pushButton_4_clicked()));


        this->showNormal();

        correctCount = 0; // set the correctCount to zero initially

        randomize(); // randomize the number selections for the four choices

        addEZ(); // randomizes two integers to calculate the sum and outputs the two variables as well as assigning the
                 // solution to one of the tile choices
}

/*
    ~ Addition
       Destructor
*/
Addition::~Addition()
{
    delete ui;
}

/*
    addEZ
        This function will take RNG two different variables that will be used to calculate the sum.
        The two variables will also be output to the application window along with the answer on one 
        of the four tiles.
*/
void Addition::addEZ(){
    std::uniform_int_distribution<int> distribution(1,50); // seed distribution is set between 1-50
    int value1 = distribution(*QRandomGenerator::global()); // the first value to be RNG
    int value2 = distribution(*QRandomGenerator::global()); // the second value to be RNG

    addA = value1; // class global value is assigned 
    addB = value2;

    on_lcdNumber_overflow(); // display the variables to the screen to assist user in figuring out the solution
    on_lcdNumber_2_overflow();


    answer = value1 + value2; // calculate the sum 

    // FOR - this loop is to assign the tile values that represent the options
    for (int i=0; i< 4;i++){
        if (listAnsw[i] == -1){ // IF - the value is -1, this is the left open spot for the answer
            listAnsw[i]= answer;

            qDebug() << answer; // output for testing

            // output the answer; this is a cstring conversion from int -> cstring -> QString
            std::string s = std::to_string(listAnsw[i]);
            QString ss(s.c_str());

            if(i == 0){ // IF - i, this is the first tile on display
                std::string s = std::to_string(listAnsw[0]);
                QString ss(s.c_str());

                option1->setText(ss);
            }else if(i == 1){
                std::string s = std::to_string(listAnsw[1]);
                QString ss(s.c_str());

                option2->setText(ss);
            }else if(i == 2){
                std::string s = std::to_string(listAnsw[2]);
                QString ss(s.c_str());

                option3->setText(ss);
            }else{
                std::string s = std::to_string(listAnsw[3]);
                QString ss(s.c_str());

                option4->setText(ss);
            } // end of ifelseif
        } // end of if
    } // end of for
}

/*
    randomize
        This function will RNG three different wrong answers that are not the solution to the problem
*/
void Addition::randomize(){
    // initializes the values of the array to zero. this helps identify answer position.
    listAnsw[0]= -1;
    listAnsw[1]= -1;
    listAnsw[2]= -1;
    listAnsw[3]= -1;


    std::uniform_int_distribution<int> distribution(1,50); // RNG distribution span
    std::uniform_int_distribution<int> posDist(0,3); // RNG between 0 and 3 to randomize the positions of the wrong answers

    int value = distribution(*QRandomGenerator::global()); // set the RNG integer for the value
    int aPos = posDist(*QRandomGenerator::global()); // set the RNG of the position for the array

    // FOR - will go through the array and place the RNG values into the array which will be displayed on the specified tiles
    for (int i=0; i< 4;i++){
        if (i != aPos && i != -1){ // assign to position if the answer is not already there and it is not -1
            int wPos = distribution(*QRandomGenerator::global()); // RNG the positions of the wrong answers
            listAnsw[i]= wPos; // set the position in the array

            if(i == 0){ // IF - display the RNG number based on i
                std::string s = std::to_string(listAnsw[0]);
                QString ss(s.c_str());

                option1->setText(ss);
            }else if(i == 1){
                std::string s = std::to_string(listAnsw[1]);
                QString ss(s.c_str());

                option2->setText(ss);
            }else if(i == 2){
                std::string s = std::to_string(listAnsw[2]);
                QString ss(s.c_str());

                option3->setText(ss);
            }else{
                std::string s = std::to_string(listAnsw[3]);
                QString ss(s.c_str());

                option4->setText(ss);
            }
        }
    }
    arrayPointer = listAnsw; // set the pointer to the answer in the array
}

/*
    on_pushButton_clicked
         This function will check if the button clicked contains the correct answer. If yes then randomize the numbers again 
         and provide a new problem and solution
*/
void Addition::on_pushButton_clicked()
{
    if(answer == listAnsw[0]){ // IF - if the correct answer has been selected
        qDebug() << "Yay!"; // output to console for testing
        correctCount++; // increment the number of correct answers
        on_lcdNumber_3_overflow(); // change the number of correct answers displayed
        randomize(); // recall randomize for a new selection of wrong answers
        addEZ(); // recall to randomize new problem, a calculate a new solution, and output for display
    }else{ // ELSE - it is incorrect
        qDebug() << "Incorrect!";
        correctCount = 0; // reinitialize to zero
        on_lcdNumber_3_overflow(); // redisplay reinitialized correctCount 
    }
}

void Addition::on_pushButton_2_clicked()
{
    if(answer == listAnsw[1]){
        qDebug() << "Yay!";
        correctCount++;
        on_lcdNumber_3_overflow();
        randomize();
        addEZ();
    }else{
        qDebug() << "Incorrect!";
        correctCount = 0;
        on_lcdNumber_3_overflow();
    }
}

void Addition::on_pushButton_3_clicked()
{
    if(answer == listAnsw[2]){
        qDebug() << "Yay!";
        correctCount++;
        on_lcdNumber_3_overflow();
        randomize();
        addEZ();
    }else{
        qDebug() << "Incorrect!";
        correctCount = 0;
        on_lcdNumber_3_overflow();
    }
}

void Addition::on_pushButton_4_clicked()
{
   if(answer == listAnsw[3]){
        qDebug() << "Yay!";
        correctCount++;
        on_lcdNumber_3_overflow();
        randomize();
        addEZ();
   }else{
       qDebug() << "Incorrect!";
       correctCount = 0;
       on_lcdNumber_3_overflow();
   }
}

/*
    on_lcdNumber_overflow
        This function will display the first value to be displayed in the function
*/
void Addition::on_lcdNumber_overflow()
{
    std::string fVar = std::to_string(addA);
    QString fVar1(fVar.c_str());

    numberA->display(fVar1);
}

void Addition::on_lcdNumber_2_overflow()
{
    std::string sVar = std::to_string(addB);
    QString sVar1(sVar.c_str());

    numberB->display(sVar1);
}

/*
    on_lcdNumber_3_overflow
        This function will display the number of correct answers 
*/
void Addition::on_lcdNumber_3_overflow()
{
    std::string cAns = std::to_string(correctCount);
    QString corAns(cAns.c_str());

    corCounter->display(corAns);
}
