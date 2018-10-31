
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <cstdlib>


using namespace std;
int answer, compAwsr,gradeLevel,mathChoice,userAnswer;
vector<int>randQuest;
int *answerPointer;
int *arrayPointer;



char a=toupper(97), b=toupper(98), c=toupper(99),d=toupper(100);
bool isTrue=false;
void additionQuestionEz(){
    int firstNumber,secondNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%9);
    secondNumber=1+(rand()&9);
    answer  = firstNumber + secondNumber;
    answerPointer= &answer;
    cout<< firstNumber<<" + "<<secondNumber <<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" + "<<secondNumber <<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" + "<<secondNumber <<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void additionQuestionHard(){
    int firstNumber,secondNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%99);
    secondNumber=1+(rand()&99);
    answer  = firstNumber + secondNumber;
    cout<< firstNumber<<" + "<<secondNumber <<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" + "<<secondNumber <<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" + "<<secondNumber <<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void additionQuestionExpert(){
    int firstNumber,secondNumber,thirdNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%999);
    secondNumber=1+(rand()&999);
    thirdNumber= 1+(rand()%999);
    answer  = firstNumber + secondNumber + thirdNumber;
    cout<< firstNumber<<" + "<<secondNumber <<" + "<<thirdNumber<<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" + "<<secondNumber <<" + "<<thirdNumber<<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" + "<<secondNumber <<" + "<<thirdNumber<<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void subtractionQuestionEz(){
    int firstNumber,secondNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%9);
    secondNumber=1+(rand()&9);
    answer  = firstNumber - secondNumber;
    cout<< firstNumber<<" - "<<secondNumber <<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" - "<<secondNumber <<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" - "<<secondNumber <<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void subtractionQuestionHard(){
    int firstNumber,secondNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%99);
    secondNumber=1+(rand()&99);
    answer  = firstNumber + secondNumber;
    cout<< firstNumber<<" - "<<secondNumber <<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" - "<<secondNumber <<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" - "<<secondNumber <<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void subtractionQuestionExpert(){
    int firstNumber,secondNumber,thirdNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%999);
    secondNumber=1+(rand()&999);
    thirdNumber= 1+(rand()%999);
    answer  = firstNumber - secondNumber - thirdNumber;
    cout<< firstNumber<<" - "<<secondNumber <<" - "<<thirdNumber<<" - ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" - "<<secondNumber <<" - "<<thirdNumber<<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" - "<<secondNumber <<" - "<<thirdNumber<<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void MultiplicationQuestionEz(){
    int firstNumber,secondNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%9);
    secondNumber=1+(rand()&9);
    answer  = firstNumber * secondNumber;
    cout<< firstNumber<<" * "<<secondNumber <<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" * "<<secondNumber <<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" * "<<secondNumber <<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void MultiplicationQuestionHard(){
    int firstNumber,secondNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%99);
    secondNumber=1+(rand()&99);
    answer  = firstNumber + secondNumber;
    cout<< firstNumber<<" * "<<secondNumber <<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" * "<<secondNumber <<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" * "<<secondNumber <<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void MultiplicationQuestionExpert(){
    int firstNumber,secondNumber,thirdNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%999);
    secondNumber=1+(rand()&999);
    thirdNumber= 1+(rand()%999);
    answer  = firstNumber - secondNumber - thirdNumber;
    cout<< firstNumber<<" * "<<secondNumber <<" * "<<thirdNumber<<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" * "<<secondNumber <<" * "<<thirdNumber<<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" * "<<secondNumber <<" * "<<thirdNumber<<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void divisionQuestionEz(){
    int firstNumber,secondNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%9);
    secondNumber=1+(rand()&9);
    answer  = firstNumber / secondNumber;
    cout<< firstNumber<<" ÷ "<<secondNumber <<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" ÷ "<<secondNumber <<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" ÷ "<<secondNumber <<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void divisionQuestionHard(){
    int firstNumber,secondNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%99);
    secondNumber=1+(rand()&99);
    answer  = firstNumber / secondNumber;
    cout<< firstNumber<<" ÷ "<<secondNumber <<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" ÷ "<<secondNumber <<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" ÷ "<<secondNumber <<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void divisionQuestionExpert(){
    int firstNumber,secondNumber,thirdNumber,answer;
    srand(time(NULL));
    firstNumber= 1+(rand()%999);
    secondNumber=1+(rand()&999);
    thirdNumber= 1+(rand()%999);
    answer  = firstNumber - secondNumber - thirdNumber;
    cout<< firstNumber<<" ÷ "<<secondNumber <<" ÷ "<<thirdNumber<<" = ";
    cin>>userAnswer;
    while (userAnswer != answer){
        if(userAnswer > answer){
            cout<<"Your answer little bit too high, try something lower: \n";
            cout<< firstNumber<<" ÷ "<<secondNumber <<" ÷ "<<thirdNumber<<" = ";
            cin>> userAnswer;}
        if(userAnswer < answer){
            cout<<"Your answer a little too low, try something higher: \n";
            cout<< firstNumber<<" ÷ "<<secondNumber <<" ÷ "<<thirdNumber<<" = ";
            cin>> userAnswer;
        }
        if (userAnswer == answer){
            cout<<"Correct\n";
        }
    }
    
}
void randomAnswer(){

    int questRan[4]={-1,-1,-1,-1};
    
    srand(time(NULL));
    unsigned int x = (rand()%4);
    questRan[x]=*answerPointer;
    for (int i=0; i< 4;i++){
        if (i!=x){
            int y = (rand()%9)-1;
            questRan[i]= y;
            
        }
        cout<< questRan[i]<<"\t";
    }
    cout<<endl;
    arrayPointer=questRan;
}
/*void setMultipleChoice(){
    srand(time(NULL));
    unsigned int x =1+ (rand()%9);
    for(int a =0;a<4;a++){
        if(arrayPointer[a]==*answerPointer){
            arrayPointer[a]= *answerPointer;
        }
        if (arrayPointer[a]==-1){
            unsigned int x =1+ (rand()%9);
            arrayPointer[a]= x;
        }
    }
    for (int i =0;i<4;i++){
            cout<< arrayPointer[i]<<"\t";
    }
    cout<<endl;
}*/
