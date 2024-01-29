/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 17, 2024, 5:48 PM
 * Purpose: Template used to start all projects
 */

//System Libraries
#include <iostream> //Input-Output Library
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
  cout<<"1.  Prolem 1"<<endl;
  cout<<"2.  Prolem 2"<<endl;
  cout<<"3.  Prolem 3"<<endl;
  cout<<"4.  Prolem 4"<<endl;
  cin>>choice;
  
    //Process or Map solutions
 switch(choice){
     case '1':cout<<endl<<"You are in Problem 1"<<endl;break;
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

