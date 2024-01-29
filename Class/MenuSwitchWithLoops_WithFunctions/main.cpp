/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 18, 2024, 12:48 PM
 * Purpose: Menu with Functions
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
void prblm1();
void prblm2();
void prblm3();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all variables
  char nMnuItm;
  unsigned short probNum;
  
    //Initialize all variables
  nMnuItm=3;
  
    //Display Menu
  do{
      cout<<"This is an example Menu Program"<<endl;
      cout<<"Input the Problem Number to Run"<<endl;
      cout<<"1.  Prolem 1 Diamond Pattern"<<endl;
      cout<<"2.  Prolem 2"<<endl;
      cout<<"3.  Prolem 3"<<endl;
      cin>>probNum;

        //Process or Map solutions
     switch(probNum){
         case '1':prblm1();break;
         case '2':prblm2();break;
         case '3':prblm3();break;
         default: cout<<"Existing Menu"<<endl;
     }
  }while(probNum>0&&probNum<=nMnuItm);
    //Display the output

    //Exit the Program
 return 0;
}
void prblm1(){
    cout<<endl;
    cout<<"   *\n";
    cout<<"  ***"<<endl;
    cout<<" *****\n";
    cout<<"*******"<<endl;
    cout<<" *****\n";
    cout<<"  ***"<<endl;
    cout<<"   *\n";
    cout<<endl;
}
void prblm2(){
    cout<<endl<<"You are in Problem 2"<<endl<<endl;
}
void prblm3(){
    cout<<endl<<"You are in Problem 3"<<endl<<endl;
}

