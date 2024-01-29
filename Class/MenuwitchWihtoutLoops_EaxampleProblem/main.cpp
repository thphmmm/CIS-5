/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 17, 2024, 5:48 PM
 * Purpose: Template used to start all projects
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
  char choice;
  
    //Initialize all variables
  cout<<"Which Problem would you like to run"<<endl;
  cout<<"1.  Prolem Ternary Operator"<<endl;
  cout<<"2.  Prolem 2"<<endl;
  cout<<"3.  Prolem 3"<<endl;
  cout<<"4.  Prolem 4"<<endl;
  cin>>choice;
  
    //Process or Map solutions
 switch(choice){
     case '1':{
         cout<<endl<<"You are in Problem Ternary Operator"<<endl;
         //Declare all variables
         char grade;//Letter grade
         char score;//0-100

         //Initialize all variables
         score=rand()%51+50;//[50,100]

         //Process or Map solutions
         if(score>=90)     grade='A';
         else if(score>=80)grade='C';
         else if(score>=60)grade='B';
         else if(score>=70)grade='D'; 
         else              grade='F';    

         //Display the output
         cout<<"Score = "<<static_cast<int>(score)
         <<" give Grade = "<<grade<<endl;    
         break;
             } 
     case '2':cout<<endl<<"You are in Problem 2"<<endl;break;
     case '3':cout<<endl<<"You are in Problem 3"<<endl;break;
     case '4':cout<<endl<<"You are in Problem 4"<<endl;break;
     default: cout<<"Existing Menu"<<endl;
 }   
 
    //Display the output
 cout<<"End of Menu"<<endl;
    //Exit the Program
    return 0;
}

